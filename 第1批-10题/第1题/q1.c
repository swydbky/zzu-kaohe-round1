#include <stdio.h>

int main(void)
{
    double huashi = 0.0;   /* 定义华氏度，双精度小数，给初始值0.0，不给系统会乱填一个进去 */
    double sheshi = 0.0;   /* 摄氏度 */

    printf("输入华氏温度 F： ");
    scanf("%lf", &huashi);    /* %lf读double，&取地址符，输入要写，输出不写 */

    sheshi = 5 * (huashi - 32) / 9;

    printf("%.2f\n", sheshi);                  /* %.2f 输出保留两位小数 */

    return 0;
}
