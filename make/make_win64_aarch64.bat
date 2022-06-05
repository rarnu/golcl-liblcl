CD ..

MD lib\aarch64-win64
MD release

fpc -Twin64 -Paarch64 -MObjFPC -Scghi -O3 -l -vewnhibq -WG ^
    -Filib\aarch64-win64 ^
    -Fisrc ^
    -Fisrc\mylcl ^
    -Fisrc\userdefines ^
    -Fusrc ^
    -Fusrc/additional ^
    -Fisrc/additional ^
    -Fusrc/chart ^
    -Fisrc/chart ^
    -Fusrc/cef ^
    -Fisrc/cef ^
    -Fusrc\3rdparty\richmemo ^
    -Fusrc\3rdparty\ATFlatControls ^
    -Fusrc\3rdparty\richmemo/win32 ^
    -Fusrc/3rdparty/chart ^
    -Fusrc/3rdparty/cef ^
    -Fisrc/3rdparty/cef ^
    -Fulazarus\lcl ^
    -Filazarus\lcl ^
    -Fulazarus\lcl\interfaces\win32 ^
    -Filazarus\lcl\interfaces\win32 ^
    -Filazarus\lcl\include ^
    -Fulazarus\lazutils ^
    -Filazarus\lazutils ^
    -Fulazarus\lcl\widgetset ^
    -Fulazarus\lcl\forms ^
    -Fulazarus\printers ^
    -Fulazarus\printers\win32 ^
    -Filazarus\printers\win32 ^
    -Fulazarus\datetimectrls ^
    -Filazarus\datetimectrls ^
    -Fulazarus\synedit ^
    -Filazatus\synedit ^
    -Fu. ^
    -FUlib\aarch64-win64 ^
    -FE. ^
    -orelease\liblcla.dll ^
    -dLCL -dLCLwin32  ^
    liblcl.lpr
 

