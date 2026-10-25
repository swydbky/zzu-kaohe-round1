#include <stdio.h>

static void print_num(int n, int k)
{
    if (n >= k)    /* 如果有高位，再处理一次 */
    {
        print_num(n / k, k);    /* 处理这个高位 */
    }

    int d = n % k;
    if (d < 10)
    {
        printf("%c", '0' + d);
    }
    else
    {
        printf("%c", 'A' + d - 10);
    }
}

int main(void)
{
    int number = 0;
    int k = 0;    /* 小写 */

    printf("请输入十进制整数和进制 K(2~16)： ");
    scanf("%d %d", &number, &k);

    if (k < 2 || k > 16)    /* 用或并列两个判断，只要一个不对就进if */
    {
        printf("Invalid base\n");
        return 0;    /* eles分支啥也不干时，去掉不影响功能，为了好看不用eles */
    }

    if (number < 0)    /* 不同语言负数取余数的符号规定不一致，为避免余数为负算出乱码，若输入负数先转正数算，在最前面添负号 */
    {
        printf("-");
        number = -number;
    }

    print_num(number, k);
    printf("\n");

    return 0;
}
