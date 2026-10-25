#include <stdio.h>

#define geshu 10    /* 用一个宏，如果要排不是10个数直接改这里不用一个个改，而且这样看着更清楚，不用去猜代码里那堆10都是啥 */

void bubble_sort_desc(int arr[], int n)
/* arr和int是告诉函数会输入这两个东西，不用填内容，
宏只能管一个文件，如果想跨文件调用这个函数，后面就用形式占位n，只在本题文件中用的话可以直接写geshu */
{
    for (int i = 0; i < n - 1; i++)    /* 每轮会把没排序的数中最小的放到最后面，所以最多排个数减一次就行 */
    {
        int cishu = 0;
        for (int j = 0; j < n - 1 - i; j++)    /* 只动前面剩下的就行 */
        {
            if (arr[j] < arr[j + 1])    /* 对于要处理的两个相邻数，如果前面的比后面的小，就交换位置 */
            {
                int linshi     = arr[j];    /* 先把靠前的数暂存为linshi，把前赋值为后，后赋值为linshi */
                arr[j]      = arr[j + 1];
                arr[j + 1]  = linshi;

                cishu = 1;
            }
        }
        if (cishu == 0)    /* 如果这轮没换，说明提前排完了，直接结束 */
        {
            break;
        }
    }
}

int main(void)
{
    int arr[geshu];

    printf("请输入 %d 个整数: ", geshu);
    for (int i = 0; i < geshu; i++)    /* 循环geshu次，读这么多个数 */
    {
     scanf("%d", &arr[i]);    /* 把读到的数存到数组里 */
    }

    bubble_sort_desc(arr, geshu);

    for (int i = 0; i < geshu; i++)
    {
        printf("%d", arr[i]);
        if (i < geshu - 1)    /* 只在前n-1次循环后面补空格 */
        {
            printf(" ");    /* 这样写防止以空格结尾导致误判 */
        }
    }
    printf("\n");

    return 0;
}
