#include <stdio.h>

#define SQUARE(x) ((x) * (x))    /* 宏在代码编译之前把前面括号里的东西替换成后面括号里的，宏里面的每项都加小括号防止替换后有更高级的运算让计算顺序乱了 */

int main(void)
{
    int num = 0;

    printf("输入一个整数： ");
    scanf("%d", &num);    /* 读一个整数，取num的地址放进去 */
    printf("%d\n", SQUARE(num));    /* 要输出平方，套上宏 */

    return 0;
}
