#!/bin/bash
# This file is meant to be included by the parent cppbuild.sh script
# 检查 PLATFORM 变量是否已设置
echo "javacppsdk上一级，PLATFORM的值：$PLATFORM"

echo "脚本名称: $0"
echo "操作命令: $1"        # install
echo "模块ID: $2"          # ${javacpp.moduleId} 的值
echo "平台参数: $3"        # -platform=linux-x86_64
echo "扩展名参数: $4"      # -extension=.so

# 获取参数总数
echo "参数总数: $#"

# 获取所有参数
echo "所有参数: $@"
echo "当前路径1: $PWD"



if [[ $1 == "install" ]]; then
    # 编译C/C++代码
    cd cpp && ./build.sh
    echo "C/C++代码编译完成"
    echo ""

    cd ..
    echo "当前路径2: $PWD"
    DST_PREFIX="$PWD/javacppsdk/cppbuild/$PLATFORM"
    echo "安装路径: $DST_PREFIX" # /home/dataexa/lisx/javacpp-project/javacppsdk/cppbuild/linux-x86_64

    echo "开始复制头文件和库文件"
    # 创建目标目录
    mkdir -p "$DST_PREFIX/include"
    mkdir -p "$DST_PREFIX/lib"
    
    # 复制头文件
    cp -r "$PWD/cpp/include"/* "$DST_PREFIX/include/"
    echo "已复制头文件命令：cp -r $PWD/cpp/include/* $DST_PREFIX/include/"
    
    # 复制库文件
    cp -r "$PWD/cpp/build/lib"/* "$DST_PREFIX/lib/"
    echo "已复制库文件命令：cp -r $PWD/cpp/build/lib/* $DST_PREFIX/lib/"

fi
