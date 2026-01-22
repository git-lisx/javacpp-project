#include "add_demo.h"
#include "Point.h"
#include <iostream>

int main(int argc, char* argv[])
{
    int a = 1;
    int b = 2;
    int result = add(a,b);
    std::cout << a << " + " << b <<  " = " << result << std::endl;

    // 结构体使用示例
    std::cout << "\n--- 结构体示例 ---" << std::endl;

    // 创建两个点
    Point p1 = create_point(3, 4);
    Point p2 = {7, 1};

    // 打印点信息
    std::cout << "点1: ";
    print_point(p1);
    
    std::cout << "点2: ";
    print_point(p2);
    
    // 计算两点距离
    double dist = distance(p1, p2);
    std::cout << "两点的距离: " << dist << std::endl;
    
    return 0;
}
