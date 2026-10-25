#ifndef __E_H__    /* 如果没有被定义过 */
#define __E_H__

double factorial(int n);    /* 声明两个函数 */
double exp_approx(double x);

#endif    /* #ifndef/#define/#endif合起来叫头文件保护宏，防止同一个源文件里include两次e.h导致重复定义 */
