#include "BitmapDB.h"
#include <QDir>

BitmapDB* BitmapDB::instance = nullptr;

BitmapDB::BitmapDB()
{

}

BitmapDB* BitmapDB::GetInstance()
{
  if (!instance) instance = new BitmapDB();
  return instance;
}

void BitmapDB::Init(ItemDB* itemDB, bool writeFiles = false)
{
  items = QImage("res/items.png");
  itemsMask = QImage("res/items_mask.png");
  int imageWidth = items.width();
  int imageHeight = items.height();
  QPainter p;

  // 0xaarrggbb
  u32 palletes[] = {
    0xFFEBEBEB, 0xFFE1505C, 0xFF47B267, 0xFF577BFF,
    0xFFE8C506, 0xFF9788D1, 0xFF4EC3E5, 0xFFDF9C65,
    0xFFD98B94, 0xFFDFE500, 0xFFAFAFAF, 0xFFBA954B,
    0xFF92D0C1, 0xFF3D7F3A, 0xFFAD1547, 0xFF4C4CD9,
    0xFF56379E, 0xFF909BB0, 0xFFD464A2, 0xFF685ECD,
    0xFF3257A7, 0xFF2A8D61, 0xFF9A5C45, 0xFF9EC09A,
    0xFFD7C18D, 0xFFE16D44, 0xFF86B239, 0xFFFFFFFF
  };

  iconTints.insert(0, &items); iconTints.insert(1, &items);
  iconTints.insert(2, &items); iconTints.insert(3, &items);
  iconTints.insert(4, &items); iconTints.insert(5, &items);
  iconTints.insert(6, &items); iconTints.insert(7, &items);
  iconTints.insert(8, &items); iconTints.insert(9, &items);
  iconTints.insert(10, &items); iconTints.insert(11, &items);
  iconTints.insert(13, &items); iconTints.insert(14, &items);
  iconTints.insert(15, &items); iconTints.insert(24, &items);
  iconTints.insert(25, &items); iconTints.insert(26, &items);

  int count = 0;
  QMapIterator<u32, QImage*> tinter(iconTints);
  while (tinter.hasNext()) {
    tinter.next();
    u32 key = tinter.key();

    QImage* tint = new QImage(1024, 1024, QImage::Format_ARGB32);
    QColor pallete = palletes[key];
    tint->fill(pallete);

    p.begin(tint);
    p.setCompositionMode(QPainter::CompositionMode_DestinationOut);
    p.fillRect(0, 0, imageWidth, imageHeight, itemsMask);
    p.setCompositionMode(QPainter::CompositionMode_Multiply);
    p.fillRect(0, 0, imageWidth, imageHeight, items);
    p.end();

    iconTints.insert(key, tint);
    
    if (writeFiles)
      tint->save(QString("res/sample/items_p%1.png").arg(key));
  }

  for (size_t i = 0; i < itemDB->count(); i++)
  {
    itemInfo* info = itemDB->GetItemById(i);
    int icon_id = info->icon_id;
    int icon_color = info->icon_color;

    u64 key = BuildKey(icon_id, icon_color);
    if (!icons.contains(key)) {
      int iconWidth = 64;
      int iconHeight = 64;
      int x = (icon_id % 16) * iconWidth;
      int y = (icon_id / 16) * iconHeight;

      QImage iconImage = iconTints.value(icon_color, &items)->copy(x, y, iconWidth, iconHeight);
      QPixmap iconPixmap = QPixmap::fromImage(iconImage);
      QIcon* icon = new QIcon(iconPixmap);
      icons.insert(key, icon);

      if (writeFiles)
        iconImage.save(QString("res/sample/item_%1_%2.png").arg(icon_id).arg(icon_color));
    }
  }
}

void BitmapDB::Free()
{
  QMapIterator<u64, QIcon*> i(icons);
  while (i.hasNext()) {
    i.next();
    free(i.value());
  }

  delete(instance);
  instance = nullptr;
}

QIcon* BitmapDB::ItemPixmap(u32 icon_id, u32 icon_color)
{
  QIcon* result = nullptr;
  u64 key = BuildKey(icon_id, icon_color);

  if (!icons.contains(key)) {
    QString path = QString("res/ItemIcons/%1_%2.png").arg(icon_id).arg(icon_color);
    qInfo("Loading %s", qUtf8Printable(path));

    if (QFile::exists(path))
      result = new QIcon(path);
    icons.insert(key, result);
  }
  else {
    qInfo("Re-using icon id=%d, color=%d", icon_id, icon_color);
    result = icons.value(key);
  }

  return result;
}

QIcon* BitmapDB::ItemIcon(itemInfo* info)
{
  u64 key = BuildKey(info->icon_id, info->icon_color);
  return icons.value(key, nullptr);
}
