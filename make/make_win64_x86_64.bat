CD ..

MD lib\x86_64-win64

fpc -Twin64 -Px86_64 -MObjFPC -Scghi -O3 -l -vewnhibq -WG ^
    -Filib\x86_64-win64 ^
    -Fisrc ^
    -Fisrc\mylcl ^
    -Fisrc\userdefines ^
    -Fusrc ^
    -Fusrc\3rdparty\richmemo ^
    -Fusrc\3rdparty\ATFlatControls ^
    -Fusrc\3rdparty\richmemo/win32 ^
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
    -FUlib\x86_64-win64 ^
    -FE. ^
    -oliblcl_x86_64.dll ^
    -dLCL -dLCLwin32  ^
    liblcl.lpr
 

