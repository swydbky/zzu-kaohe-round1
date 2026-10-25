#include <stdio.h>

/* 思路：先把上面n-1个搬到辅助柱，再把最大的那个搬到目标柱，最后把n-1个搬到目标柱；
   拆完n变小了，再拆一次，直到只剩1个。 */
void hanoi(int n, char from, char to, char via)
{
    if (n == 1)    /* 递归终止条件：只剩一个盘，直接移过去 */
    {
        printf("%c -> %c\n", from, to);    /* %c是char的格式符，用于打印单个字符 */
        return;
    }

    hanoi(n - 1, from, via, to);    /* 第1步：上面n-1个盘从from移到via，此时to当辅助柱 */

    printf("%c -> %c\n", from, to);    /* 第2步：最大的那个盘从from直接移到to */

    hanoi(n - 1, via, to, from);    /* 第3步：n-1个盘从via移到to，此时from当辅助柱 */
}

int main(void)
{
    int n = 0;

    scanf("%d", &n);

    hanoi(n, 'A', 'C', 'B');    /* 输出单字符用单引号，起始都在A柱，最终要到C柱，和上面步骤对比换bc顺序 */

    return 0;
}
