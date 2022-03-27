@echo off

mkdir ga7-win64
cd ga7-win64
cmake -G "Visual Studio 16 2019" ../../src/engine
cd ..
