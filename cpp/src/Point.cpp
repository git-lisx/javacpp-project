#include "../include/Point.h"
#include <iostream>
#include <cmath>

Point create_point(int x, int y) {
    Point p;
    p.x = x;
    p.y = y;
    std::cout << "[INFO] 创建了Point结构体实例, x=" << x << ", y=" << y << std::endl;
    return p;
}

void print_point(Point p) {
    std::cout << "Point(x=" << p.x << ", y=" << p.y << ")" << std::endl;
}

double distance(Point p1, Point p2) {
    int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;
    double dist = sqrt(dx*dx + dy*dy);
    std::cout << "[INFO] 点(" << p1.x << "," << p1.y << ") 到点(" << p2.x << "," << p2.y << ") 的距离是 " << dist << std::endl;
    return dist;
}