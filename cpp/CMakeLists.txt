cmake_minimum_required(VERSION 3.10)
project(MultiplyDemoProject)

set(CMAKE_CXX_STANDARD 11)

# 包含头文件目录
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

#################### 生成库文件-start ###############################
############# 步骤1：添加库 ###############
# 添加库
add_library(add_demo SHARED
        src/add_demo.cpp
        src/Point.cpp
)

# 添加 native library 库
add_library(native_library SHARED
        src/NativeLibrary.cpp
)

############# 步骤2：.so文件输出库到特定目录，非必须 ##########
# 输出库到特定目录
set_target_properties(add_demo PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
#    PREFIX "" # 默认情况下，CMake 会在库文件名前添加 lib 前缀（如 libadd_demo.so）
)

# 输出 native library 库到特定目录
set_target_properties(native_library PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
)

#################### 生成库文件-end ####################################



#################### 实现生成可执行文件-start ############################
############# 步骤1：添加可执行文件 ############
# 添加可执行文件
add_executable(demo_main
        src/demo_main.cpp)

# 添加 native library 测试可执行文件
add_executable(test_native_library
        src/test_native_library.cpp)

############# 步骤2：链接库到可执行文件 ###########
# 链接库到可执行文件
target_link_libraries(demo_main add_demo)

# 链接 native library 到测试可执行文件
target_link_libraries(test_native_library native_library)

#################### 实现生成可执行文件-end ############################