#ifndef MHWISAVEEDITOR_H
#define MHWISAVEEDITOR_H

#include <QMainWindow>
#include <QSignalMapper>
#include "../types/mhw_save.h"

#include "itemslotview.h"
#include "inventoryeditor.h"

constexpr char* ALL_SAVE = "All Files (*)";
constexpr char* ENCRYPTED_SAVE = "Encrypted Save (*.raw)";
constexpr char* UNENCRYPTED_SAVE = "Unencrypted Save(*.bin)";

QT_BEGIN_NAMESPACE
namespace Ui { class MHWISaveEditor; }
QT_END_NAMESPACE

class MHWISaveEditor : public QMainWindow
{
  Q_OBJECT

public slots:
  void Open();
  void Save();
  void Slot(int slot);
  void OpenLocation(const QString& location);
  void Backup();
  void Restore();
  void Dump();

public:
  MHWISaveEditor(QWidget* parent = nullptr);
  ~MHWISaveEditor();

  void closeEvent(QCloseEvent* event);

private:
  void SaveFile(const QString& path, mhw_save_raw** save, bool encrypt);
  void LoadFile(const QString& path, mhw_save_raw** save);

  Ui::MHWISaveEditor* ui;
  mhw_save_raw* mhwRaw = nullptr;
  int saveslot = 0;

  QSignalMapper* slotSignalMapper;
  QSignalMapper* openSignalMapper;

  QList<QAction*> slotActions;
  QList<InventoryEditor*> inventoryEditors;

  void LoadSaveSlot();
};
#endif // MHWISAVEEDITOR_H
