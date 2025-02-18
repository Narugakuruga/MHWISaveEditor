#include "Settings.h"

#include <QDir>
#include <QStandardPaths>

#include "../../types/constants.h"

Settings* Settings::instance = nullptr;

Settings::Settings()
{
  ReadSettings();
  _requireRestart = false;
}

Settings* Settings::GetInstance()
{
  if (!instance) instance = new Settings();
  return instance;
}

void Settings::Free()
{
  WriteSettings();
  delete settings;

  delete(instance);
  instance = nullptr;
}

bool Settings::SyncSettings(bool sync)
{
  if (sync) settings->sync();

  settings->beginGroup("backups");
  SetDoAutoBackups(settings->value("doAutoBackups", _doAutoBackups).toBool());
  SetMaxBackups(settings->value("maxBackups", _maxBackups).toInt());
  settings->endGroup();

  settings->beginGroup("items");
  SetMatrixMode(settings->value("matrixMode", _matrixMode).toBool());
  SetShowUnobtainable(settings->value("showUnobtainable", _showUnobtainable).toBool());
  SetItemPouchSearchAll(settings->value("itemPouchSearchAll", _itemPouchSearchAll).toBool());
  settings->endGroup();

  settings->beginGroup("qol");
  SetDarkMode(settings->value("darkMode", _darkMode).toBool());
  settings->endGroup();

  settings->beginGroup("language");
  SetUiLanguage((mhw_language)settings->value("uiLanguage", (u8)_uiLanguage).toInt());
  SetItemLanguage((mhw_language)settings->value("itemLanguage", (u8)_itemLanguage).toInt());
  settings->endGroup();

  return GetRequireRestart() && sync;
}

void Settings::ReadSettings()
{
  QString path = GetDataPath() + "/settings.ini";
  QSettings::Format format = QSettings::Format::IniFormat;
  QSettings::setDefaultFormat(format);
  settings = new QSettings(path, format, nullptr);
  SyncSettings(false);

  qDebug() << "Read settings file: " + settings->fileName();
}

void Settings::WriteSettings()
{
  settings->beginGroup("backups");
  settings->setValue("doAutoBackups", _doAutoBackups);
  settings->setValue("maxBackups", _maxBackups);
  settings->endGroup();

  settings->beginGroup("items");
  settings->setValue("matrixMode", _matrixMode);
  settings->setValue("showUnobtainable", _showUnobtainable);
  settings->setValue("itemPouchSearchAll", _itemPouchSearchAll);
  settings->endGroup();

  settings->beginGroup("qol");
  settings->setValue("darkMode", _darkMode);
  settings->endGroup();

  settings->beginGroup("language");
  settings->setValue("uiLanguage", (u8)_uiLanguage);
  settings->setValue("itemLanguage", (u8)_itemLanguage);
  settings->endGroup();

  qDebug() << "Wrote settings file: " + settings->fileName();
}

QString Settings::FileName()
{
  return settings->fileName();
}

QString Settings::GetSteamPath()
{
  QSettings regSteam(R"(HKEY_CURRENT_USER\SOFTWARE\Valve\Steam)", QSettings::NativeFormat);
  if (regSteam.childKeys().contains("SteamPath"))
    return regSteam.value("SteamPath").toString();

  return NULL;
}

QString Settings::GetGamePath()
{
  QString path = GetSteamPath();
  if (!path.isNull()) {
    QDir fullpath(path);

    bool cd = true;
    cd &= fullpath.cd("steamapps");
    if (cd) cd &= fullpath.cd("common");
    if (cd) cd &= fullpath.cd(QString::fromUtf8(MHW_FOLDER_NAME));
    if (!cd) path = NULL;
    else path = fullpath.path();
  }

  return path;
}

QString Settings::GetDefaultSaveDir()
{
  QSettings regUsers(R"(HKEY_CURRENT_USER\SOFTWARE\Valve\Steam\Users)", QSettings::NativeFormat);
  QStringList users = regUsers.childGroups();

  QString path = GetSteamPath(), user;
  if (users.length() > 0)
    user = users.at(0);

  if (!path.isNull()) {
    QDir fullpath(path);
    bool cd = true;
    cd &= fullpath.cd("userdata");
    if (cd) cd &= fullpath.cd(user);
    if (cd) cd &= fullpath.cd(QString::fromUtf8(MHW_ID));
    if (cd) cd &= fullpath.cd("remote");
    if (!cd) cd |= fullpath.cd(QDir::homePath());
    assert(cd);

    path = fullpath.path();
  }
  else {
    path = QDir::homePath();
  }

  qDebug(qUtf8Printable(path));
  return path;
}

QString Settings::GetDefaultSavePath()
{
  return GetDefaultSaveDir() + "/" + QString::fromUtf8(SAVE_NAME);
}

QString Settings::GetDefaultDumpPath(int slot)
{
  assert(slot >= 0 && slot <= 9);
  QString path = GetDefaultSavePath();
  int last = path.length() - 1;
  path[last] = QChar('0' + slot);
  return path + ".bin";
}

QString Settings::GetDataPath()
{
  QString path = QStandardPaths::standardLocations(QStandardPaths::AppLocalDataLocation)[0];

  QDir dir = QDir();
  if (dir.mkpath(path)) return path;
  else return "";
}


QString Settings::GetDataPathBackups()
{
  QString path = GetDataPath();
  path = path + "/backups/";

  QDir dir = QDir();
  if (dir.mkpath(path)) return path;
  else return "";
}

QString Settings::GetIconDumpPath()
{
  QString path = GetDataPath();
  path = path + "/icons/";

  QDir dir = QDir();
  if (dir.mkpath(path)) return path;
  else return "";
}

QString Settings::GetLanguageCode(mhw_language language)
{
  QString result = "eng";
  switch (language) {
  case (mhw_language)0xFE:                result = NULL; break;  // Use game language
  case mhw_language::Japanese:            result = "jpn"; break;
  case mhw_language::English:             result = "eng"; break;
  case mhw_language::French:              result = "fre"; break;
  case mhw_language::Spanish:             result = "spa"; break;
  case mhw_language::Dutch:               result = "ger"; break;
  case mhw_language::Italian:             result = "ita"; break;
  case mhw_language::Korean:              result = "kor"; break;
  case mhw_language::TraditionalChinese:  result = "chT"; break;
  case mhw_language::SimplifiedChinese:   result = "chS"; break;
  case mhw_language::Russian:             result = "rus"; break;
  case mhw_language::Polish:              result = "pol"; break;
  case mhw_language::PortugueseBrazil:    result = "ptB"; break;
  case mhw_language::Arabic:              result = "ara"; break;
  case (mhw_language)0xFF:                result = ""; break;    // Invalid language
  }
  return result;
}

mhw_language Settings::LanguageIndexToEnum(int index)
{
  return Languages(index);
}

int Settings::LanguageEnumToIndex(mhw_language language)
{
  int index = -1;
  for (int i = 0; (u8)Languages(i) != 0xFF; i++) {
    if (Languages(i) == language) {
      index = i;
    }
  }
  return index;
}
