#include "e.h"

double factorial(int n)    /* 这里返回值用int的范围太小，得用double，n正常用int */
{
    if (n < 2)    /* 递归终止条件：n小于2时返回1，因为1的阶乘和0的阶乘都是1 */
    {
        return 1.0;
    }

    return n * factorial(n - 1);
}

double exp_approx(double x)
{
    int n = 0;
    double he = 0.0;
    double fenzi = 1.0;

    for (n = 0; n < 20; n++)    /* <20，0到19共20项 */
    {
        he = he + fenzi / factorial(n);    /* 从第0项开始累加 */
        fenzi = fenzi * x;    /* 当前分子乘x作为下轮的分子 */
    }

    return he;
}

