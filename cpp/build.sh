#!/bin/bash

rm -rf build/*
mkdir -p build && cd build
cmake ..  # 读取 CMakeLists.txt，下载依赖，生成 Makefile
make      # 编译 + 链接，生成可执行程序