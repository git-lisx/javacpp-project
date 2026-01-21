cmake_minimum_required(VERSION 3.10)
project(MultiplyDemoProject)

set(CMAKE_CXX_STANDARD 11)

# 包含头文件目录
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# 添加库
add_library(add_demo SHARED
        src/add_demo.cpp
)

# 输出库到特定目录
set_target_properties(add_demo PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
#    PREFIX "" # 默认情况下，CMake 会在库文件名前添加 lib 前缀（如 libadd_demo.so）
)


# 添加可执行文件
add_executable(demo_main
        src/demo_main.cpp)

# 链接库到可执行文件
target_link_libraries(demo_main add_demo)

