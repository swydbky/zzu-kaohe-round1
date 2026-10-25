#include <stdio.h>

/* 1U是“无符号的1”，左移31位也不会变成负数（用有符号1左移31位是未定义行为）。
   宏里每个参数都用小括号包住，防止外面传进来的表达式被运算符优先级拆坏。 */
#define SET_BIT(reg, bit)    ((reg) | (1U << (bit)))    /* 有1变1，用| */
/* 1U二进制表示为000...0001。<<bit就是把它往左推bit格，结果就是第bit位是1，其余全是0 */
#define CLEAR_BIT(reg, bit)  ((reg) & ~(1U << (bit)))
/* 把钥匙取反作为掩码然后掩掉（&）要处理的那位（强制变0）其他不动 */
#define TOGGLE_BIT(reg, bit) ((reg) ^ (1U << (bit)))
/* ^两个不同才是1，原来是1相同变0，原来是0不同变1 */
#define CHECK_BIT(reg, bit)  ((((reg) & (1U << (bit))) != 0U) ? 1 : 0)
/* 三目运算符，如果 “条件” 成立，就取 ? 后面那个，否则取 : 后面那个 */
/* &操作完之后是全0或bit位一个1其他全0，后者输出时会转回10进制，CHECK_BIT要的是“是不是1”，所以先用 !=0变成0/1再输出 */

int main(void)
{
    unsigned int reg = 0;    /* unsigned表示第31位不再当符号位了，也拿来当普通的数值位用 */
    unsigned int bit = 0;

    scanf("%u %u", &reg, &bit);

    /* 四个宏都是纯表达式，只算数不改reg，所以每项都基于原始reg，四项互不影响 */
    printf("SET_BIT: %u\n", SET_BIT(reg, bit));
    printf("CLEAR_BIT: %u\n", CLEAR_BIT(reg, bit));
    printf("TOGGLE_BIT: %u\n", TOGGLE_BIT(reg, bit));
    printf("CHECK_BIT: %d\n", CHECK_BIT(reg, bit));

    return 0;
}
