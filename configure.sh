#!/bin/sh
rm -rf build
mkdir build
cd build
cmake -GXcode -DCMAKE_BUILD_TYPE=Debug ..


