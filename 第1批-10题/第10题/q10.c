#include <stdio.h>

#define N 10

int hanshu(int arr[], int n)    /* 一个函数完成排序和求奇数个数 */
{
    int linshi[N];

    n = n % N;

    for (int i = 0; i < N; i++)    /* 用循环一个个求要把一项放哪，先暂存到linshi里，防止覆盖其他没动的项 */
    {
        linshi[(i + n) % N] = arr[i];
    }

    int ji = 0;
    for (int i = 0; i < N; i++)
    {
        arr[i] = linshi[i];    /* 把linshi里存的数一个个写回来 */

        if (arr[i] % 2 != 0)    /* 不能被2整除判断奇数 */
        {
            ji++;
        }
    }

    return ji;
}

int main(void)
{
    int arr[N];
    int n = 0;

    printf("请输入 %d 个整数： ", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("请输入右移位数：");
    scanf("%d", &n);

    int ji = hanshu(arr, n);

    for (int i = 0; i < N; i++)
    {
        printf("%d", arr[i]);
        if (i < N - 1)
        {
            printf(" ");
        }
    }
    printf("\n");

    printf("奇数个数：%d\n", ji);

    return 0;
}
