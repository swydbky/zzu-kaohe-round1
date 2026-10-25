#include <stdio.h>

#define length 5    /* 用宏写以后可能会改的参数 */

#define pitchmin (-30.0f)    /* C里带小数的默认为double，这里加f和底下统一成float更明确，本题可不加 */
#define pitchmax (60.0f)    /* 不要用min max当名字，容易和头文件里的重复 */

typedef struct
{
    float yaw;
    float pitch;
    float chassis_rotate_wz;
} Gimbal_Ctrl_Cmd_s;    /* 用typedef命名后是类型的名字，没有定义变量，底下主函数才定义了变量 */

int main(void)
{
    Gimbal_Ctrl_Cmd_s cmd[length];
    int i = 0;
    int safe = 0;
    int unsafe = 0;

    for (i = 0; i < length; i++)
    {
        scanf("%f %f %f", &cmd[i].yaw, &cmd[i].pitch, &cmd[i].chassis_rotate_wz);
    }

    for (i = 0; i < length; i++)
    {
        if (cmd[i].pitch >= pitchmin && cmd[i].pitch <= pitchmax)    /* 边界值算安全，所以两边都用 >= 和 <= */
        {
            printf("Safe\n");
            safe++;
        }
        else
        {
            printf("Unsafe\n");
            unsafe++;
        }
    }

    printf("安全组数: %d\n", safe);
    printf("危险组数: %d\n", unsafe);

    return 0;
}
