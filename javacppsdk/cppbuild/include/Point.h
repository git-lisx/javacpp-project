/**
 * @file Point.h
 * @brief 包含Point结构体定义的头文件
 *
 * 该头文件定义了一个简单的二维点结构体，用于演示结构体的使用。
 */

#ifndef POINT_H
#define POINT_H

/**
 * @brief 定义一个表示二维点的结构体
 */
typedef struct {
    int x;  // x坐标
    int y;  // y坐标
} Point;

/**
 * @brief 创建一个Point结构体实例
 *
 * @param x x坐标值
 * @param y y坐标值
 * @return Point 返回一个新的Point实例
 */
Point create_point(int x, int y);

/**
 * @brief 打印Point结构体的信息
 *
 * @param p 要打印的Point实例
 */
void print_point(Point p);

/**
 * @brief 计算两点之间的距离
 *
 * @param p1 第一个点
 * @param p2 第二个点
 * @return double 返回两点之间的距离
 */
double distance(Point p1, Point p2);

#endif // POINT_H