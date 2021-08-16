 /******************************************************************************
 *
 * Layer: MCAL
 *
 * File Name: GPIO.h
 *
 * Description: contains all the functions prototypes and used macros
 *
 * Author: ELWARDY ELMEHDY
 *******************************************************************************/
 
 
#ifndef GPIO_H
#define GPIO_H

#include "GPIO_CONFIG.h"

 /******************************************************************************
 *
 *			Functions Prototypes
 *
 *******************************************************************************/
 
 void vGPIOConfig(GPIOSrcName_t GPIOx,uint32 port_numb,GPIOModeName_t GPIO_Mode);
 void vOutputConfig(GPIOSrcName_t GPIOx,uint32 port_numb,GPIOOutMode_t OutMode,GPIOOutSpeed_t OutSpeed);
 void vPullConfig(GPIOSrcName_t GPIOx,uint32 port_numb,GPIOPullUpDown_t PULL_UpDown);
 uint32 uGPIORead(GPIOSrcName_t GPIOx,uint32 port_numb);
 void vGPIOSetReset(GPIOSrcName_t GPIOx,uint32 port_numb,uint32 mode);
 void vGPIOLock(GPIOSrcName_t GPIOx,uint32 port_numb);
 void vGPIOPinSetAltFn(GPIOSrcName_t GPIOx,uint8 port_numb,GPIOAlternateFunction_t Alt_Value);

 
 
 
  /******************************************************************************
 *
 *			Macros
 *
 *******************************************************************************/
 
 
 
 
 
/* GPIO Ports Base Address*/
#define GPIOA_BASE_ADDRESS  0x40020000
#define GPIOB_BASE_ADDRESS  0x40020400
#define GPIOC_BASE_ADDRESS  0x40020800
#define GPIOD_BASE_ADDRESS  0x40020C00
#define GPIOE_BASE_ADDRESS  0x40021000
#define GPIOF_BASE_ADDRESS  0x40021400
#define GPIOG_BASE_ADDRESS  0x40021800
#define GPIOH_BASE_ADDRESS  0x40021C00

/* Registers of PORTA */ 
#define GPIOA_MODER					(*((uint32 *)(GPIOA_BASE_ADDRESS + 0x00)))
#define GPIOA_OTYPER				(*((uint32 *)(GPIOA_BASE_ADDRESS + 0x04)))
#define GPIOA_OSPEEDR				(*((uint32 *)(GPIOA_BASE_ADDRESS + 0x08)))
#define GPIOA_PUPDR         (*((uint32 *)(GPIOA_BASE_ADDRESS + 0x0C)))
#define GPIOA_IDR           (*((uint32 *)(GPIOA_BASE_ADDRESS + 0x10)))
#define GPIOA_ODR           (*((uint32 *)(GPIOA_BASE_ADDRESS + 0x14)))
#define GPIOA_BSRR          (*((uint32 *)(GPIOA_BASE_ADDRESS + 0x18)))
#define GPIOA_LCKR          (*((uint32 *)(GPIOA_BASE_ADDRESS + 0x1C)))
#define GPIOA_AFRL          (*((uint32 *)(GPIOA_BASE_ADDRESS + 0x20)))
#define GPIOA_AFRH          (*((uint32 *)(GPIOA_BASE_ADDRESS + 0x24)))

/* Registers of PORTB */ 
#define GPIOB_MODER					(*((uint32 *)(GPIOB_BASE_ADDRESS + 0x00)))
#define GPIOB_OTYPER				(*((uint32 *)(GPIOB_BASE_ADDRESS + 0x04)))
#define GPIOB_OSPEEDR				(*((uint32 *)(GPIOB_BASE_ADDRESS + 0x08)))
#define GPIOB_PUPDR         (*((uint32 *)(GPIOB_BASE_ADDRESS + 0x0C)))
#define GPIOB_IDR           (*((uint32 *)(GPIOB_BASE_ADDRESS + 0x10)))
#define GPIOB_ODR           (*((uint32 *)(GPIOB_BASE_ADDRESS + 0x14)))
#define GPIOB_BSRR          (*((uint32 *)(GPIOB_BASE_ADDRESS + 0x18)))
#define GPIOB_LCKR          (*((uint32 *)(GPIOB_BASE_ADDRESS + 0x1C)))
#define GPIOB_AFRL          (*((uint32 *)(GPIOB_BASE_ADDRESS + 0x20)))
#define GPIOB_AFRH          (*((uint32 *)(GPIOB_BASE_ADDRESS + 0x24)))

/* Registers of PORTC */ 
#define GPIOC_MODER					(*((uint32 *)(GPIOC_BASE_ADDRESS + 0x00)))
#define GPIOC_OTYPER				(*((uint32 *)(GPIOC_BASE_ADDRESS + 0x04)))
#define GPIOC_OSPEEDR				(*((uint32 *)(GPIOC_BASE_ADDRESS + 0x08)))
#define GPIOC_PUPDR         (*((uint32 *)(GPIOC_BASE_ADDRESS + 0x0C)))
#define GPIOC_IDR           (*((uint32 *)(GPIOC_BASE_ADDRESS + 0x10)))
#define GPIOC_ODR           (*((uint32 *)(GPIOC_BASE_ADDRESS + 0x14)))
#define GPIOC_BSRR          (*((uint32 *)(GPIOC_BASE_ADDRESS + 0x18)))
#define GPIOC_LCKR          (*((uint32 *)(GPIOC_BASE_ADDRESS + 0x1C)))
#define GPIOC_AFRL          (*((uint32 *)(GPIOC_BASE_ADDRESS + 0x20)))
#define GPIOC_AFRH          (*((uint32 *)(GPIOC_BASE_ADDRESS + 0x24)))

/* Registers of PORTD */ 
#define GPIOD_MODER					(*((uint32 *)(GPIOD_BASE_ADDRESS + 0x00)))
#define GPIOD_OTYPER				(*((uint32 *)(GPIOD_BASE_ADDRESS + 0x04)))
#define GPIOD_OSPEEDR				(*((uint32 *)(GPIOD_BASE_ADDRESS + 0x08)))
#define GPIOD_PUPDR         (*((uint32 *)(GPIOD_BASE_ADDRESS + 0x0C)))
#define GPIOD_IDR           (*((uint32 *)(GPIOD_BASE_ADDRESS + 0x10)))
#define GPIOD_ODR           (*((uint32 *)(GPIOD_BASE_ADDRESS + 0x14)))
#define GPIOD_BSRR          (*((uint32 *)(GPIOD_BASE_ADDRESS + 0x18)))
#define GPIOD_LCKR          (*((uint32 *)(GPIOD_BASE_ADDRESS + 0x1C)))
#define GPIOD_AFRL          (*((uint32 *)(GPIOD_BASE_ADDRESS + 0x20)))
#define GPIOD_AFRH          (*((uint32 *)(GPIOD_BASE_ADDRESS + 0x24)))

/* Registers of PORTE */ 
#define GPIOE_MODER					(*((uint32 *)(GPIOE_BASE_ADDRESS + 0x00)))
#define GPIOE_OTYPER				(*((uint32 *)(GPIOE_BASE_ADDRESS + 0x04)))
#define GPIOE_OSPEEDR				(*((uint32 *)(GPIOE_BASE_ADDRESS + 0x08)))
#define GPIOE_PUPDR         (*((uint32 *)(GPIOE_BASE_ADDRESS + 0x0C)))
#define GPIOE_IDR           (*((uint32 *)(GPIOE_BASE_ADDRESS + 0x10)))
#define GPIOE_ODR           (*((uint32 *)(GPIOE_BASE_ADDRESS + 0x14)))
#define GPIOE_BSRR          (*((uint32 *)(GPIOE_BASE_ADDRESS + 0x18)))
#define GPIOE_LCKR          (*((uint32 *)(GPIOE_BASE_ADDRESS + 0x1C)))
#define GPIOE_AFRL          (*((uint32 *)(GPIOE_BASE_ADDRESS + 0x20)))
#define GPIOE_AFRH          (*((uint32 *)(GPIOE_BASE_ADDRESS + 0x24)))

/* Registers of PORTF */ 
#define GPIOF_MODER					(*((uint32 *)(GPIOF_BASE_ADDRESS + 0x00)))
#define GPIOF_OTYPER				(*((uint32 *)(GPIOF_BASE_ADDRESS + 0x04)))
#define GPIOF_OSPEEDR				(*((uint32 *)(GPIOF_BASE_ADDRESS + 0x08)))
#define GPIOF_PUPDR         (*((uint32 *)(GPIOF_BASE_ADDRESS + 0x0C)))
#define GPIOF_IDR           (*((uint32 *)(GPIOF_BASE_ADDRESS + 0x10)))
#define GPIOF_ODR           (*((uint32 *)(GPIOF_BASE_ADDRESS + 0x14)))
#define GPIOF_BSRR          (*((uint32 *)(GPIOF_BASE_ADDRESS + 0x18)))
#define GPIOF_LCKR          (*((uint32 *)(GPIOF_BASE_ADDRESS + 0x1C)))
#define GPIOF_AFRL          (*((uint32 *)(GPIOF_BASE_ADDRESS + 0x20)))
#define GPIOF_AFRH          (*((uint32 *)(GPIOF_BASE_ADDRESS + 0x24)))

/* Registers of PORTG */ 
#define GPIOG_MODER					(*((uint32 *)(GPIOG_BASE_ADDRESS + 0x00)))
#define GPIOG_OTYPER				(*((uint32 *)(GPIOG_BASE_ADDRESS + 0x04)))
#define GPIOG_OSPEEDR				(*((uint32 *)(GPIOG_BASE_ADDRESS + 0x08)))
#define GPIOG_PUPDR         (*((uint32 *)(GPIOG_BASE_ADDRESS + 0x0C)))
#define GPIOG_IDR           (*((uint32 *)(GPIOG_BASE_ADDRESS + 0x10)))
#define GPIOG_ODR           (*((uint32 *)(GPIOG_BASE_ADDRESS + 0x14)))
#define GPIOG_BSRR          (*((uint32 *)(GPIOG_BASE_ADDRESS + 0x18)))
#define GPIOG_LCKR          (*((uint32 *)(GPIOG_BASE_ADDRESS + 0x1C)))
#define GPIOG_AFRL          (*((uint32 *)(GPIOG_BASE_ADDRESS + 0x20)))
#define GPIOG_AFRH          (*((uint32 *)(GPIOG_BASE_ADDRESS + 0x24)))

/* Registers of PORTH */ 
#define GPIOH_MODER					(*((uint32 *)(GPIOH_BASE_ADDRESS + 0x00)))
#define GPIOH_OTYPER				(*((uint32 *)(GPIOH_BASE_ADDRESS + 0x04)))
#define GPIOH_OSPEEDR				(*((uint32 *)(GPIOH_BASE_ADDRESS + 0x08)))
#define GPIOH_PUPDR         (*((uint32 *)(GPIOH_BASE_ADDRESS + 0x0C)))
#define GPIOH_IDR           (*((uint32 *)(GPIOH_BASE_ADDRESS + 0x10)))
#define GPIOH_ODR           (*((uint32 *)(GPIOH_BASE_ADDRESS + 0x14)))
#define GPIOH_BSRR          (*((uint32 *)(GPIOH_BASE_ADDRESS + 0x18)))
#define GPIOH_LCKR          (*((uint32 *)(GPIOH_BASE_ADDRESS + 0x1C)))
#define GPIOH_AFRL          (*((uint32 *)(GPIOH_BASE_ADDRESS + 0x20)))
#define GPIOH_AFRH          (*((uint32 *)(GPIOH_BASE_ADDRESS + 0x24)))

#endif
