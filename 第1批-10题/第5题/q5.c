#include <stdio.h>

static int gcd(int a, int b)    /* static加在函数前，意为这个函数只在本文件内可见 */
{
    int yu = 0;

    while (b != 0)    /* 只要b不是0 */
    {
        yu = a % b;   /* 取余数 */
        a = b;    /* 把被除数替换为除数 */
        b = yu;
    }

    return a;    /* 输出最大公约数 */
}    /* 用这个函数的时候，输入a，b输出最大公约数 */


int main(void)
{
    int a = 0, b = 0;

    printf("请输入两个正整数： ");
    scanf("%d %d", &a, &b);

    int yue = gcd(a, b);    /* 调用函数，获得最大公约数yue */
    int bei = a * b / yue;    /* 算最小公倍数,数特别大的话int可能会爆，可以换longlong，算的时候可以先除后乘 */

    printf("%d %d\n", yue, bei);

    return 0;
}
