//
// Created by dataexa on 2026/1/21.
//

// #include "../include/NativeLibrary.h"
#include "NativeLibrary.h"
#include <iostream>

int main() {
    // 创建 NativeClass 实例
    NativeLibrary::NativeClass obj;

    // 测试设置属性
    std::cout << "正在测试 NativeLibrary..." << std::endl;
    obj.set_property("你好, NativeLibrary!");
    
    // 测试获取属性
    std::string prop = obj.get_property();
    std::cout << "属性值: " << prop << std::endl;

    // 验证属性是否正确设置
    if (prop == "你好, NativeLibrary!") {
        std::cout << "测试通过: 属性正确设置和获取!" << std::endl;
    } else {
        std::cout << "测试失败: 属性未正确设置或获取!" << std::endl;
    }

    return 0;
}