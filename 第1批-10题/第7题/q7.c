#include <stdio.h>

#include <ctype.h>   /* 要用isspace，输入0到255的数判断是不是空白字符 */

int main(void)
{
    char zancun[256];

    printf("请输入一个字符串: ");    /* 定义一个能装 256 个字符的字符数组 */

    fgets(zancun, 256, stdin);
    /* fgets 能读入带空格的整行，读到 '\n' 或被读满为止
       三个参数分别为存到哪，最大读取长度，从哪输入 */

    int changdu = 0;

    for (int i = 0; zancun[i] != '\0'; i++)    /* 从第0个开始，不是末尾\0就下一个 */
    {
        if (!isspace((unsigned char)zancun[i]))
        /* 取zancun里的第i个字符，强制转换成无符号字符，有无符号两种表示方式一一对应，
        把符号去了，防止编译器给字符带负号让isspace无法工作 */
        {
            changdu++;    /* 不是空白字符长度加一 */
        }
    }

    printf("%d\n", changdu);

    return 0;
}
