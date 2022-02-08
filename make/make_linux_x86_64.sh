#!/bin/sh

cd ..

mkdir -p lib/x86_64-linux

fpc -Tlinux -Px86_64 -MObjFPC -Scghi -O3 -l -vewnhibq \
    -Filib/x86_64-linux \
    -Fisrc \
    -Fisrc/mylcl \
    -Fisrc/userdefines \
    -Fusrc \
    -Fusrc/3rdparty/richmemo \
    -Fusrc/3rdparty/ATFlatControls \
    -Fusrc/3rdparty/richmemo/gtk2 \
    -Fulazarus/lcl \
    -Filazarus/lcl \
    -Fulazarus/lcl/interfaces/gtk2 \
    -Filazarus/lcl/interfaces/gtk2 \
    -Filazarus/lcl/include \
    -Fulazarus/lazutils \
    -Filazarus/lazutils \
    -Fulazarus/lcl/widgetset \
    -Fulazarus/lcl/nonwin32 \
    -Fulazarus/lcl/forms \
    -Fulazarus/printers \
    -Fulazarus/printers/unix \
    -Filazarus/printers/unix \
    -Fulazarus/datetimectrls \
    -Filazarus/datetimectrls \
    -Fulazarus/cairocanvas \
    -Fu. \
    -FUlib/x86_64-linux \
    -FE. \
    -oliblcl_x86_64.so \
    -dLCL -dLCLgtk2 -dRMLCLTRUNK \
    liblcl.lpr
 

