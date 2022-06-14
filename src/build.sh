#!/bin/bash
mkdir -p build
pushd ../build
cd ../build
g++ ../src/main.cpp -o game -g -lsfml-graphics -lsfml-window -lsfml-system
popd