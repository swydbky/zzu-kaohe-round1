#include <stdio.h>    /* 尖括号：只找系统目录 */
#include "e.h"    /* 双引号：先找当前目录，再找系统目录 */

int main(void)
{
    double x = 0.0;
    double result = 0.0;

    scanf("%lf", &x);    /* double对应双精度浮点数%lf */

    result = exp_approx(x);    /* 直接调用e.c中的函数 */

    printf("%.4f\n", result);

    return 0;
}
