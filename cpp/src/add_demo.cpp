#include "../include/add_demo.h"
#include <iostream>

int add(int a, int b) {
    int result = a + b;
    std::cout << "[INFO] 这是C/C++的代码 add called, a=" << a << ", b=" << b << ", result=" << result << std::endl;
    return result;
}