# Minimal example for Error EXE1832

**Instructions**

1. Open this project group with C++ Builder 13.0 or 12.3
2. Compile All using Platform Win64

**Observed result**

```
Checking project dependencies...
Compiling MyLib.cbproj (Debug, Win64)
bcc64 command line for "Foo.cpp"
  c:\program files (x86)\embarcadero\studio\23.0\bin\bcc64.exe -cc1 -D _DEBUG -output-dir ..\build\Win64\Debug\MyLib -I 
  C:\Users\Hendrik\dev\staticlib-exe1832\MyLib -I ..\AnotherLib -isystem "c:\program files (x86)\embarcadero\studio\23.0\include" -isystem "c:\program 
  files (x86)\embarcadero\studio\23.0\include\dinkumware64" -isystem "c:\program files (x86)\embarcadero\studio\23.0\include\windows\crtl" -isystem 
  "c:\program files (x86)\embarcadero\studio\23.0\include\windows\sdk" -isystem "c:\program files (x86)\embarcadero\studio\23.0\include\windows\rtl" 
  -isystem "c:\program files (x86)\embarcadero\studio\23.0\include\windows\vcl" -isystem "c:\program files 
  (x86)\embarcadero\studio\23.0\include\windows\fmx" -isystem C:\Users\Public\Documents\Embarcadero\Studio\23.0\hpp\Win64 -isystem "c:\program files 
  (x86)\embarcadero\studio\23.0\include\boost_1_70\\boost\tr1\tr1" -isystem "c:\program files (x86)\embarcadero\studio\23.0\include\boost_1_70" 
  -isystem C:\Users\Public\Documents\MitovSoftware\Libraries\Delphi\12.0\OpenWire\12.0\.. -isystem 
  C:\Users\Public\Documents\MitovSoftware\Libraries\Delphi\12.0\OpenWire\12.0\Win64 -isystem 
  C:\Users\Public\Documents\MitovSoftware\Libraries\Delphi\12.0\OpenWire\12.0\Win64\Debug -isystem 
  C:\Users\Public\Documents\MitovSoftware\Libraries\Delphi\12.0\LabPacks\12.0\.. -isystem 
  C:\Users\Public\Documents\MitovSoftware\Libraries\Delphi\12.0\LabPacks\12.0\Win64 -isystem 
  C:\Users\Public\Documents\MitovSoftware\Libraries\Delphi\12.0\LabPacks\12.0\Win64\Debug -isystem 
  C:\Users\Public\Documents\MitovSoftware\Libraries\Delphi\12.0\OpenWire\12.0\OpenWire\OpenWireLabDemo -isystem 
  C:\Users\Public\Documents\MitovSoftware\Libraries\Delphi\12.0\OpenWire\12.0\OpenWire\OpenWireLabDemo\12.0\Win64 -isystem 
  C:\Users\Public\Documents\MitovSoftware\Libraries\Delphi\12.0\OpenWire\12.0\OpenWire\OpenWireLabDemo\12.0\Win64\Debug -isystem 
  C:\Users\Public\Documents\Embarcadero\Studio\23.0\hpp\Win64 -debug-info-kind=standalone -dwarf-version=4 -fcxx-exceptions -fborland-extensions 
  -nobuiltininc -nostdsysteminc -triple x86_64-pc-win32-elf -emit-obj -fexceptions -fseh -munwind-tables -fno-common -fno-spell-checking 
  -fno-use-cxa-atexit -main-file-name Foo.cpp -x c++ -std=c++17 -O0 -fmath-errno -tR -tM -tU -o ..\build\Win64\Debug\MyLib\Foo.o -dependency-file 
  ..\build\Win64\Debug\MyLib\Foo.d -MT ..\build\Win64\Debug\MyLib\Foo.o -sys-header-deps  Foo.cpp 
brcc32 command line for "..\build\Win64\Debug\MyLib\MyLib.vrc"
  c:\program files (x86)\embarcadero\studio\23.0\bin\cgrc.exe -c65001 ..\build\Win64\Debug\MyLib\MyLib.vrc -fo..\build\Win64\Debug\MyLib\MyLib.res 
tlib64 command line for "..\build\Win64\Debug\MyLib\Foo.o"
  c:\program files (x86)\embarcadero\studio\23.0\bin\tlib64.exe /N ..\build\Win64\Debug\MyLib.a /a ..\build\Win64\Debug\MyLib\Foo.o 
Compiling MyPackage.cbproj (Debug, Win64)
bcc64 command line for "MyPackage.cpp"
  c:\program files (x86)\embarcadero\studio\23.0\bin\bcc64.exe -cc1 -D _DEBUG -D USEPACKAGES -output-dir ..\build\Win64\Debug\MyPackage -I 
  C:\Users\Hendrik\dev\staticlib-exe1832\MyPackage -I ..\MyLib -I ..\AnotherLib -isystem "c:\program files (x86)\embarcadero\studio\23.0\include" 
  -isystem "c:\program files (x86)\embarcadero\studio\23.0\include\dinkumware64" -isystem "c:\program files 
  (x86)\embarcadero\studio\23.0\include\windows\crtl" -isystem "c:\program files (x86)\embarcadero\studio\23.0\include\windows\sdk" -isystem 
  "c:\program files (x86)\embarcadero\studio\23.0\include\windows\rtl" -isystem "c:\program files (x86)\embarcadero\studio\23.0\include\windows\vcl" 
  -isystem "c:\program files (x86)\embarcadero\studio\23.0\include\windows\fmx" -isystem C:\Users\Public\Documents\Embarcadero\Studio\23.0\hpp\Win64 
  -isystem "c:\program files (x86)\embarcadero\studio\23.0\include\boost_1_70\\boost\tr1\tr1" -isystem "c:\program files 
  (x86)\embarcadero\studio\23.0\include\boost_1_70" -isystem C:\Users\Public\Documents\MitovSoftware\Libraries\Delphi\12.0\OpenWire\12.0\.. -isystem 
  C:\Users\Public\Documents\MitovSoftware\Libraries\Delphi\12.0\OpenWire\12.0\Win64 -isystem 
  C:\Users\Public\Documents\MitovSoftware\Libraries\Delphi\12.0\OpenWire\12.0\Win64\Debug -isystem 
  C:\Users\Public\Documents\MitovSoftware\Libraries\Delphi\12.0\LabPacks\12.0\.. -isystem 
  C:\Users\Public\Documents\MitovSoftware\Libraries\Delphi\12.0\LabPacks\12.0\Win64 -isystem 
  C:\Users\Public\Documents\MitovSoftware\Libraries\Delphi\12.0\LabPacks\12.0\Win64\Debug -isystem 
  C:\Users\Public\Documents\MitovSoftware\Libraries\Delphi\12.0\OpenWire\12.0\OpenWire\OpenWireLabDemo -isystem 
  C:\Users\Public\Documents\MitovSoftware\Libraries\Delphi\12.0\OpenWire\12.0\OpenWire\OpenWireLabDemo\12.0\Win64 -isystem 
  C:\Users\Public\Documents\MitovSoftware\Libraries\Delphi\12.0\OpenWire\12.0\OpenWire\OpenWireLabDemo\12.0\Win64\Debug -isystem 
  C:\Users\Public\Documents\Embarcadero\Studio\23.0\hpp\Win64 -debug-info-kind=standalone -dwarf-version=4 -fcxx-exceptions -fborland-extensions 
  -nobuiltininc -nostdsysteminc -triple x86_64-pc-win32-elf -emit-obj -fexceptions -fseh -munwind-tables -fno-common -fno-spell-checking 
  -fno-use-cxa-atexit -main-file-name MyPackage.cpp -x c++ -std=c++17 -O0 -fmath-errno -tR -tP -tM -tU -o ..\build\Win64\Debug\MyPackage\MyPackage.o 
  -dependency-file ..\build\Win64\Debug\MyPackage\MyPackage.d -MT ..\build\Win64\Debug\MyPackage\MyPackage.o -sys-header-deps  MyPackage.cpp 
brcc32 command line for "..\build\Win64\Debug\MyPackage\MyPackage.vrc"
  c:\program files (x86)\embarcadero\studio\23.0\bin\cgrc.exe -c65001 ..\build\Win64\Debug\MyPackage\MyPackage.vrc 
  -fo..\build\Win64\Debug\MyPackage\MyPackage.res 
ilink64 command line
  c:\program files (x86)\embarcadero\studio\23.0\bin\ilink64.exe -G8 -L..\build\Win64\Debug\MyPackage;"c:\program files 
  (x86)\embarcadero\studio\23.0\lib\Win64\debug\DE";"c:\program files (x86)\embarcadero\studio\23.0\lib\Win64\release\DE";"c:\program files 
  (x86)\embarcadero\studio\23.0\lib\Win64\debug";..\build\Win64\Debug;"c:\program files (x86)\embarcadero\studio\23.0\lib\win64\release";"c:\program 
  files (x86)\embarcadero\studio\23.0\lib\win64\release\psdk";C:\Users\Public\Documents\Embarcadero\Studio\23.0\DCP\Win64\Debug;
  C:\Users\Public\Documents\Embarcadero\Studio\23.0\Dcp\Win64 -j..\build\Win64\Debug\MyPackage;"c:\program files 
  (x86)\embarcadero\studio\23.0\lib\Win64\debug\DE";"c:\program files (x86)\embarcadero\studio\23.0\lib\Win64\release\DE";"c:\program files 
  (x86)\embarcadero\studio\23.0\lib\Win64\debug";..\build\Win64\Debug;"c:\program files (x86)\embarcadero\studio\23.0\lib\win64\release";"c:\program 
  files (x86)\embarcadero\studio\23.0\lib\win64\release\psdk";C:\Users\Public\Documents\Embarcadero\Studio\23.0\DCP\Win64\Debug;
  C:\Users\Public\Documents\Embarcadero\Studio\23.0\Dcp\Win64 -lC:\Users\Public\Documents\Embarcadero\Studio\23.0\DCP\Win64\Debug -v -Gi -Gn 
  -GBMyPackage -Tpp c0pkg64w rtl.bpi memmgr.a sysinit.o ..\build\Win64\Debug\MyPackage\MyPackage.o , ..\build\Win64\Debug\MyPackage.bpl , 
  ..\build\Win64\Debug\MyPackage.map , import64.a cp64mti.a , , ..\build\Win64\Debug\MyPackage\MyPackage.res 
[ilink64 Error] Fatal: Error detected (EXE1832)
Failed
Elapsed time: 00:00:02.6
```

**Clues**

 - The Win64x platform does not reproduce the error
 - After removing `#include <set>` the error disappears
 - The error even appears if you move `#include <set>` from `Foo.h` to `Foo.cpp`
 - `#include <vector>` produces the same error
