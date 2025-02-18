# MHW Iceborne Save Editor
A save editor for Monster Hunter World: Iceborne.

## TODO
- Equipment Box Editor (Delete those pesky Guardian Armors)
- Crown Size normalisation
- Clear arena records
- A way to open multiple saves?

## Translation
If you would like to help translate the editor into other languages, you can follow these instructions:
1. Download and install the QT Linguist package.
2. Goto `res/translations/` in the Save Editor's files (where the exe is located).
3. Make a copy of the file `mhwisaveeditor_template.ts` and name it `mhwisaveeditor_<language>.ts`, where `<language>` is the language you're translating to.
4. In QT Linguist open the file: `mhwisaveeditor_<language>.ts`
5. Goto `Edit->Translation File Settings...`
6. Change the `Target Language` to the language you want to translate to.
7. `Country/Region` can be left as `Any Country`.
8. Press OK.
9. Translate all the strings you can.
11. Repeat step 9 until satisfied.

To load the translation into the editor:
1. In QT Linguist with the file loaded.
2. Goto `File->Release`, this will create a file called `mhwisaveeditor_<language>.qm`.
3. Now in the save editor, goto `Tools->Settings` and change the UI language to the language you're working on.

## Credits
- [AsteriskAmpersand](https://github.com/AsteriskAmpersand/) - for the previous save editor and the python rewrite.
- [LEGENDFF](https://github.com/LEGENDFF/) - for the reference implementation for decrypting/encrypting the save files.
- [Synthlight](https://github.com/Synthlight/) - for the .itm template that I adapted to dump the items.
- [Marcus101RR](https://www.nexusmods.com/monsterhunterworld/users/58495681) - for the [tables](https://www.nexusmods.com/monsterhunterworld/mods/2161) that have helped me map out the save structure.

### Important Links:
- [LEGENDFF/mhw-Savecrypt](https://github.com/LEGENDFF/mhw-Savecrypt)
- [Fusion86/Cirilla](https://github.com/Fusion86/Cirilla)
- [Synthlight/MHW-Editor](https://github.com/Synthlight/MHW-Editor)
- [TanukiSharp/MHWSaveUtils](https://github.com/TanukiSharp/MHWSaveUtils)
- [Ambytes/MHW](https://github.com/Ambytes/MHW)
- [Emanem/mhw-save-editor](https://github.com/Emanem/mhw-save-editor)
- [AsteriskAmpersand/MHW-Save-Editor](https://github.com/AsteriskAmpersand/MHW-Save-Editor)
- [AsteriskAmpersand/MHW-Python-Save-Editor](https://github.com/AsteriskAmpersand/MHW-Python-Save-Editor)
- [TheCrazyT/MHW-Research](https://github.com/TheCrazyT/MHW-Research)
- [Ezekial711/MonsterHunterWorldModding](https://github.com/Ezekial711/MonsterHunterWorldModding/wiki)
- [Aradi147/MHW-Quest](https://github.com/Aradi147/MHW-Quest)
- [Marcus101RR/MHW Tables](https://www.nexusmods.com/monsterhunterworld/mods/2161)
- [ChaosFred/Guiding Lands Level Cap Analysis](https://steamcommunity.com/app/582010/discussions/0/3974929535247630028/)
- [ChaosFred/Guiding Lands Level Cap Analysis Backup](https://gamefaqs.gamespot.com/boards/211368-monster-hunter-world/78477208)

## Instructions for the curious

To build this project you first need to install [vcpkg](https://vcpkg.io).<br/>
Then you can install the required packages:
```
vcpkg install cryptopp:x64-windows
```
In Visual Studio Installer you only need `Desktop Development with C++`

Additionally you need to install a version of [QT](https://www.qt.io/), the project currently uses `QT 6.2.3`.<br/>
In the QT installer you only need to install the component: `QT/QT 6.2.3/MSVC 2019 64-bit`.

Next install the QT Visual Studio Tools extension.<br/>
Then in the QT Version settings of the extension set version to `6.2.3_msvc2019_64` and set the path to wherever you installed QT.<br/>
Restart Visual Studio once this is done, so QT sets up the appropriate environment variables.

That's it, you should be able to build it now.
