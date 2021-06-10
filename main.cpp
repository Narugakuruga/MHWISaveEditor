#include "mhwisaveeditor.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

#include "data/BitmapDB.h"
#include "data/ItemDB.h"

int main(int argc, char* argv[])
{
  QApplication a(argc, argv);

  ItemDB* itemDB = itemDB->GetInstance();
  BitmapDB* bitmapDB = bitmapDB->GetInstance();

  for (size_t i = 0; i < itemDB->count(); i++)
  {
    itemInfo* info = itemDB->GetItemById(i);

    QString path = QString("res/ItemIcons/%1_%2.png").arg(info->iconID).arg(info->iconColor);
    QPixmap* bmp = bitmapDB->Pixmap(path);
  }

  QTranslator translator;
  const QStringList uiLanguages = QLocale::system().uiLanguages();
  for (const QString& locale : uiLanguages) {
    const QString baseName = "MHWISaveEditor_" + QLocale(locale).name();
    if (translator.load(":/i18n/" + baseName)) {
      a.installTranslator(&translator);
      break;
    }
  }
  MHWISaveEditor w;
  w.show();
  return a.exec();
}
