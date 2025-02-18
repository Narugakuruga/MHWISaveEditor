#define MHWIAppName "MHWISaveEditor"
#define MHWIAppVersion "0.1.4"
#define MHWIAppPublisher "EnderHDMC"
#define MHWIAppURL "https://github.com/EnderHDMC/MHWISaveEditor"
#define MHWIAppExeName "MHWISaveEditor.exe"
#define MHWISubversion "0"

; The relative directory where the app is located.
#define RelDir "x64\Deploy"

[Setup]
; NOTE: The value of AppId uniquely identifies this application. Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{D1FB3774-D951-4645-BEB8-12831744823D}
AppName={#MHWIAppName}
AppVersion={#MHWIAppVersion}
;AppVerName={#MHWIAppName} {#MHWIAppVersion}
AppPublisher={#MHWIAppPublisher}
AppPublisherURL={#MHWIAppURL}
AppSupportURL={#MHWIAppURL}
AppUpdatesURL={#MHWIAppURL}
DefaultDirName=.\{#MHWIAppName}
DefaultGroupName={#MHWIAppName}
AllowNoIcons=yes
; Remove the following line to run in administrative install mode (install for all users.)
PrivilegesRequired=lowest
OutputDir={#RelDir}
OutputBaseFilename={#MHWIAppName}Setup-v{#MHWIAppVersion}
; NOTE: The app needs to be compiled in release mode before this script will work.
SetupIconFile={#RelDir}\res\icon.ico
Compression=lzma
SolidCompression=yes
WizardStyle=modern  
Uninstallable=no
VersionInfoVersion={#MHWIAppVersion}.{#MHWISubversion}

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
Source: "{#RelDir}\{#MHWIAppExeName}"; DestDir: "{app}"; Flags: ignoreversion
Source: "{#RelDir}\D3Dcompiler_47.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "{#RelDir}\opengl32sw.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "{#RelDir}\Qt6Core.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "{#RelDir}\Qt6Gui.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "{#RelDir}\Qt6Svg.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "{#RelDir}\Qt6Widgets.dll"; DestDir: "{app}"; Flags: ignoreversion
; Source: "{#RelDir}\vc_redist.x64.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "{#RelDir}\iconengines\*"; DestDir: "{app}\iconengines"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "{#RelDir}\imageformats\*"; DestDir: "{app}\imageformats"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "{#RelDir}\platforms\*"; DestDir: "{app}\platforms"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "{#RelDir}\res\*"; DestDir: "{app}\res"; Flags: ignoreversion recursesubdirs createallsubdirs       
Source: "{#RelDir}\styles\*"; DestDir: "{app}\styles"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: "{#RelDir}\translations\*"; DestDir: "{app}\translations"; Flags: ignoreversion recursesubdirs createallsubdirs
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Run]
Filename: "{app}\{#MHWIAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MHWIAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent

