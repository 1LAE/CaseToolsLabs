#/bin/bash
./compile.sh
cd ../build/
ctest -RV .
cd ../scripts/
