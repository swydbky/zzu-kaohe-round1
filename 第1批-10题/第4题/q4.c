#include <stdio.h>

typedef enum    /* 定义一个枚举，每项等于一个数，默认从0开始每个加一 */
{
    CMD_STOP = 0,    /* 等于0可以不写 */
    CMD_FORWARD,
    CMD_BACKWARD,
    CMD_LEFT,
    CMD_RIGHT,
    CMD_FIRE
} RobotCmd_e;    /* 枚举名写后面这 */

int main(void)
{
    int shuru = 0;

    printf("请输入指令码： ");
    scanf("%d", &shuru);    /* %d只识别一个整数部分，脏输入会影响结果，在word里有写发现的问题和解决办法 */

    RobotCmd_e cmd = (RobotCmd_e)shuru;    /* 把数对应成枚举里的项 */

    switch (cmd)
    {
        case CMD_STOP:
            printf("停止运动\n");
            break;    /* 必须有，不然会两个case一起输出就乱了 */
        case CMD_FORWARD:
            printf("前进\n");
            break;
        case CMD_BACKWARD:
            printf("后退\n");
            break;
        case CMD_LEFT:
            printf("左转\n");
            break;
        case CMD_RIGHT:
            printf("右转\n");
            break;
        case CMD_FIRE:
            printf("发射\n");
            break;
        default:
            printf("Unknown Command\n");    /* 都不是前面的项走到这 */
            break;
    }

    return 0;
}
