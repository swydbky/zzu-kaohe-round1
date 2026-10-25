#include <stdio.h>

int main(void)
{
    int year = 0, month = 0;

    printf("请输入年份和月份: ");
    scanf("%d %d", &year, &month);

    if (month < 1 || month > 12)
    {
        printf("Invalid month\n");
        return 0;
    }

    int day = 0;

    switch (month)    /* switch 中case 后面不写 break就会一直往下执行，可以用少量代码处理多个月份 */
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            day = 31;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            day = 30;
            break;

        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))    /* 如果能被4整除但不能被100整除，或能被400整除 */
            {
                day = 29;
            }
            else
            {
                day = 28;
            }
            break;
    }

    printf("%d\n", day);

    return 0;
}
