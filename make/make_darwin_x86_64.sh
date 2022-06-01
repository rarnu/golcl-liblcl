#!/bin/sh

cd ..

mkdir -p lib/x86_64-darwin
mkdir -p release

fpc -Tdarwin -Px86_64 -MObjFPC -Scghi -O3 -k-framework -kCocoa -l -vewnhibq \
    -Filib/x86_64-darwin \
    -Fisrc \
    -Fisrc/mylcl \
    -Fisrc/userdefines \
    -Fusrc \
    -Fusrc/additional \
    -Fisrc/additional \
    -Fusrc/chart \
    -Fisrc/chart \
    -Fusrc/3rdparty/richmemo \
    -Fusrc/3rdparty/ATFlatControls \
    -Fusrc/3rdparty/richmemo/cocoa \
    -Fusrc/3rdparty/chart \
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
    -Fulazarus/synedit \
    -Filazarus/synedit \
    -Fu. \
    -FUlib/x86_64-darwin \
    -FE. \
    -orelease/liblcl.dylib \
    -dLCL -dLCLcocoa -dCocoa \
    liblcl.lpr
 

