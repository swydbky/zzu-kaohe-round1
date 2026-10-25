#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, c = 0;

    printf("请输入三条边长 a b c： ");
    scanf("%d %d %d", &a, &b, &c);    /* %d会自动跳过前面的空格，这里写是为了好看 */

    if (a + b > c && a + c > b && b + c > a)    /* 所有都对才为真 */
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
