cmake_minimum_required(VERSION 3.10)
project(MultiplyDemoProject)

set(CMAKE_CXX_STANDARD 11)
message("当前系统类型: ${CMAKE_SYSTEM_NAME}")
if (CMAKE_SYSTEM_NAME STREQUAL "Windows")
    message("设置生成Windows的exe可执行文件静态链接 C++ 运行时，将libgcc和libstdc++打包至可执行文件中")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static-libgcc -static-libstdc++")
endif ()


# 包含头文件目录
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

#################### 生成库文件-start ###############################
############# 步骤1：添加库 ###############
add_library(add_demo STATIC
        src/add_demo.cpp
        src/Point.cpp
)

add_library(native_library STATIC
        src/NativeLibrary.cpp
)

############# 步骤2：.so文件输出库到特定目录，非必须 ##########
foreach (lib_name
        add_demo
        native_library
)
    message("当前lib_name: ${lib_name}")
    set_target_properties(${lib_name} PROPERTIES
            LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib # 在Linux上输出.so文件的目录
#            RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib # 在Windows上输出.dll文件的目录
            ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib # 在Windows上输出.a或.dll.a的目录
    )
endforeach ()


#################### 生成库文件-end ####################################


#################### 实现生成可执行文件-start ############################
############# 步骤1：添加可执行文件 ############
add_executable(demo_main
        src/demo_main.cpp)

add_executable(test_native_library
        src/test_native_library.cpp)
add_executable(hello_main
        src/hello_main.cpp)

############# 步骤2：链接库到可执行文件 ###########
target_link_libraries(demo_main add_demo)

target_link_libraries(test_native_library native_library)

#################### 实现生成可执行文件-end ############################