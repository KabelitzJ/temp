#!/bin/bash

rm -rf build/ dist/
mkdir build/ dist/

cmake -B build/ -G "Unix Makefiles" -DCMAKE_BUILD_TYPE:STRING=Debug
