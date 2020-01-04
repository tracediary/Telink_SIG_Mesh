#ifndef SDK_CONFIG_8285_LIGHT_CW_H_
#define SDK_CONFIG_8285_LIGHT_CW_H_


#define __PRINT_MACRO(x) #x
#define PRINT_MARCO(x) #x"=" __PRINT_MACRO(x)

#include "sdk_config_xxxx.h"

/**************************************
 * 配置LED暖光灯的引脚
 * 可能值： GPIO_PB0
 *         GPIO_PB1
 * 默认值： GPIO_PB0
 * ***********************************/
#if (C_BRIGHT == 0)
    #define PWM_R       GPIO_PB0
#else
    #define PWM_R       GPIO_PB1
#endif



/**************************************
 * 配置LED冷光灯的引脚
 * 可能值： GPIO_PB0
 *         GPIO_PB1
 * 默认值： GPIO_PB1
 * ***********************************/
#if (W_CCT == 0)
    #define PWM_G       GPIO_PB0
#else
    #define PWM_G       GPIO_PB1
#endif


/**************************************
 * 恢复出厂设置次数
 * 可能值：快速开关(0-3S)5次，10次，15次
 * 默认值：5次
 * ***********************************/
#define FACTORY_COUNT  FACTORY_RESTORE



/**************************************
 * 对接音箱模式
 * 可能值：  MESH_NORMAL_MODE		 正常模式
            MESH_SPIRIT_ENABLE		对接天猫精灵
            MESH_MI_ENABLE          对接小爱同学

 * 默认值：MESH_NORMAL_MODE
 * ***********************************/
#define CONTRON_MODE MESH_NORMAL_MODE

#endif
