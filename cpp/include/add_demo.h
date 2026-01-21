/**
 * @file multiply_demo.h
 * @brief 包含加法函数声明的头文件
 *
 * 该头文件定义了一个简单的加法函数，用于演示多文件编译。
 * 对应的源文件应包含函数的具体实现。
 */

#ifndef MULTIPLY_DEMO_H
#define MULTIPLY_DEMO_H

/**
 * @brief 计算两个整数的和
 *
 * @param a 第一个整数
 * @param b 第二个整数
 * @return int 返回 a 和 b 的和
 *
 * @note 这是一个简单的加法函数，仅用于演示目的。
 *       实际项目中可能需要考虑溢出等边界情况。
 *
 * @example
 *   int result = add(3, 4); // result = 7
 */
int add(int a, int b);

#endif // MULTIPLY_DEMO_H