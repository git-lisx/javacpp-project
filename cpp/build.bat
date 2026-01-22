@REM mkdir -f build
cd build
@REM rm -r ./
@REM # 使用CMake生成构建文件，告诉CMake使用MinGW Makefiles作为生成器
cmake .. -G "MinGW Makefiles"
@REM # 编译
cmake --build .

