# Minimal example for Error EXE1832

**Instructions**

1. Open this project group with C++ Builder 13 or 12
2. Compile All using Platform Win64

**Observed result**

```
Compiling MyLib.cbproj (Debug, Win64)
brcc32 command line for "..\build\Win64\Debug\MyLib\MyLib.vrc"
  c:\program files (x86)\embarcadero\studio\23.0\bin\cgrc.exe -c65001 ..\build\Win64\Debug\MyLib\MyLib.vrc -fo..\build\Win64\Debug\MyLib\MyLib.res 
Compiling AnotherLib.cbproj (Debug, Win64)
brcc32 command line for "..\build\Win64\Debug\AnotherLib\AnotherLib.vrc"
  c:\program files (x86)\embarcadero\studio\23.0\bin\cgrc.exe -c65001 ..\build\Win64\Debug\AnotherLib\AnotherLib.vrc 
  -fo..\build\Win64\Debug\AnotherLib\AnotherLib.res 
Compiling MyPackage.cbproj (Debug, Win64)
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
```

**Clues**

 - The Win64x platform does not reproduce the error
 - After removing the member `Bar::numbers` the error disappears
