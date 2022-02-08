#!/bin/sh

cd ..

mkdir -p lib/aarch64-darwin

fpc -Tdarwin -Paarch64 -MObjFPC -Scghi -O3 -k-framework -kCocoa -l -vewnhibq \
    -Filib/aarch64-darwin \
    -Fisrc \
    -Fisrc/mylcl \
    -Fisrc/userdefines \
    -Fusrc \
    -Fusrc/3rdparty/richmemo \
    -Fusrc/3rdparty/ATFlatControls \
    -Fusrc/3rdparty/richmemo/cocoa \
    -Fulazarus/lcl \
    -Filazarus/lcl \
    -Fulazarus/lcl/interfaces/cocoa \
    -Filazarus/lcl/interfaces/cocoa \
    -Filazarus/lcl/include \
    -Fulazarus/lazutils \
    -Filazarus/lazutils \
    -Fulazarus/lcl/widgetset \
    -Fulazarus/lcl/nonwin32 \
    -Fulazarus/lcl/forms \
    -Fulazarus/printers \
    -Fulazarus/printers/cocoa \
    -Filazarus/printers/cocoa \
    -Fulazarus/datetimectrls \
    -Filazarus/datetimectrls \
    -Fu. \
    -FUlib/aarch64-darwin \
    -FE. \
    -oliblcl_aarch64.dylib \
    -dLCL -dLCLcocoa -dCocoa \
    liblcl.lpr
 

