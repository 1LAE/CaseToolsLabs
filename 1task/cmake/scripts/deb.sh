#!/bin/bash
./compile.sh
cd ../build/
cmake --build . --target package
cd ../scripts/
