 /******************************************************************************
 *
 * Layer: MCAL
 *
 * File Name: GPIO_CONFIG.c
 *
 * Description: contains all the configuration of the GPIO peripheral
 *
 * Author: ELWARDY ELMEHDY
 *******************************************************************************/
 
#include "STD_TYPES.h"

#define Set 1
#define Reset 0

typedef enum
{
GPIOA=0,
GPIOB,
GPIOC,
GPIOD,
GPIOE,
GPIOF,
GPIOG,
GPIOH	
		
}GPIOSrcName_t;

typedef enum
{
Input=0,
Output,
Alt_function,
Analog
		
}GPIOModeName_t;


typedef enum
{
Push_pull=0,
Open_drain
		
}GPIOOutMode_t;

typedef enum
{
Low_Speed=0,
Meduim_Speed,
High_Speed,
Very_High_Speed
		
}GPIOOutSpeed_t;

typedef enum
{
No_Pull_UpDown=0,
Pull_Up,
Pull_Down
		
}GPIOPullUpDown_t;


typedef enum
{
AF0=0,
AF1,
AF2,
AF3,
AF4,
AF5,
AF6,
AF7,
AF8,
AF9,
AF10,
AF11,
AF12,
AF13,
AF14,
AF15,
		
}GPIOAlternateFunction_t;









