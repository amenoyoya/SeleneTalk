#!/bin/bash

# build SeleneTalk libraries
cd ./sltk3
bash ./build_core.sh
bash ./build_zlib.sh
bash ./build_engine.sh
cd ..

# build LuaJIT-2.0.4-sltk
# cd ./extlib/LuaJIT-2.0.4-sltk
# make && mv ./src/libluajit.* ../../lib/linux/
# make clean
# cd ..
