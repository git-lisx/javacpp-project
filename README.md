# JavaCPP Project

这是一个使用JavaCPP的示例项目，用于演示如何在Java中调用C++代码。

## 项目结构

```
.
├── cpp/                    # C++源码目录
│   ├── include/            # 头文件
│   ├── src/                # 源代码
│   ├── CMakeLists.txt      # CMake构建配置
│   └── cpp_build.sh        # C++构建脚本
├── javacpp-sample/         # JavaCPP使用示例
│   ├── src/main/java/      # 示例Java代码
│   └── pom.xml             # Maven依赖管理
├── javacppsdk/             # JavaCPP SDK相关
│   ├── src/main/java/      # 源码
│   ├── src/gen/java/       # JavaCPP生成的Java文件
│   ├── target/             # 构建输出
│   └── pom.xml             # Maven配置
├── javacppsdk-platform/    # JavaCPP platform相关，暂未使用
│   └── pom.xml             # Maven配置
└── cppbuild.sh             # 顶层C++构建脚本
```

## 功能说明

- `cpp/`: 包含C++源代码和头文件，提供原生函数供Java调用
- `javacpp-sample/`: 提供JavaCPP的使用示例
- `javacppsdk/`: JavaCPP相关的SDK组件

## 构建方法

### 构建C++部分

```bash
cd cpp
./build.sh
```


### 构建Java部分



确保已安装Maven，然后执行：

```bash
cd javacppsdk
mvn clean install
# javacpp的插件默认会执行cppbuild.sh，因此不需要再次执行
```

执行后，在javacppsdk/src/main/java/目录下生成JAVA文件，用于调用C++函数


## 使用方法

运行示例程序：

```bash
cd javacpp-sample
mvn exec:java "-Dexec.mainClass=AddDemoTest"
```

或者使用IDEA打开javacpp-sample项目，运行AddDemoTest类

注意：IDEA打开javacpp-project文件夹，运行javacpp-sample中AddDemoTest类会报错，原因待进一步研究

## 依赖项

- CMake
- Maven
- JDK 8+
- GCC或Clang编译器

## 关于JavaCPP

JavaCPP提供了高效的方式来连接Java和本地C++代码，允许直接在Java中调用C++函数，而无需编写JNI代码。这个项目展示了如何设置和使用JavaCPP进行Java与C++的互操作。

参考链接：https://github.com/bytedeco/javacpp-presets/tree/helloworld/helloworld
