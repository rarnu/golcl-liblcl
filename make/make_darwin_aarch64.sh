#!/bin/sh

cd ..

mkdir -p lib/aarch64-darwin
mkdir -p release

fpc -Tdarwin -Paarch64 -B -MObjFPC -Scghi -O3 -k-framework -kCocoa -l -vewnhibq \
    -Filib/aarch64-darwin \
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
    -FUlib/aarch64-darwin \
    -FE. \
    -orelease/liblcla.dylib \
    -dLCL -dLCLcocoa -dCocoa \
    liblcl.lpr
 

