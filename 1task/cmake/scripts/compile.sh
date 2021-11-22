#!/bin/bash
cd ..
mkdir build
cd build/
cmake ..
cmake --build .
make
cd ../scripts/
