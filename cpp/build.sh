#!/bin/bash

# 默认为Linux本地编译，如果传入win参数则进行Windows交叉编译
if [ "$1" == "win" ]; then
    # 需要先安装 sudo apt install -y mingw-w64
    echo "Building for Windows with MinGW"
    rm -rf build-win/*
    mkdir -p build-win && cd build-win
    cmake -DCMAKE_TOOLCHAIN_FILE=../toolchain-mingw64.cmake ..
    make
    echo "Windows binaries created in build-win/"
else
    echo "Building for Linux (default)"
    rm -rf build/*
    mkdir -p build && cd build
    cmake ..  # 读取 CMakeLists.txt，下载依赖，生成 Makefile
    make      # 编译 + 链接，生成可执行程序
    echo "Linux binaries created in build/"
fi