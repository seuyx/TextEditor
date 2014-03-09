#!/bin/sh
rm -rf build
mkdir build
cd build
OS=`uname`
if [ $OS = "Darwin" ]; then
    echo "This is Mac OS X."
    cmake -GXcode -DCMAKE_BUILD_TYPE=Debug ..
else
    cmake -DCMAKE_BUILD_TYPE=Debug ..
fi

