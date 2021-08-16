 /******************************************************************************
 *
 * Layer: MCAL
 *
 * File Name: RCC_CONFIG.c
 *
 * Description: contains all the configuration of the RCC peripheral
 *
 * Author: ELWARDY ELMEHDY
 *******************************************************************************/
 
#include "STD_TYPES.h"

//_t mean datatype 

//AHB1 peripheral

#define OTGHSULPIEN 30
#define OTGHSEN 29
#define ETHMACPTPEN 28
#define ETHMACRXEN 27
#define DMA2EN 22
#define DMA1EN 21
#define GPIOKEN 10
#define GPIOJEN 9
#define GPIOIEN 8
#define GPIOHEN 7
#define GPIOGEN 6
#define GPIOFEN 5
#define GPIOEEN 4
#define GPIODEN 3
#define GPIOCEN 2
#define GPIOBEN 1
#define GPIOAEN 0


//AHB2 peripheral

#define OTGFSEN 7
#define RNGEN 6
#define HASHEN 5
#define CRYPEN 4
#define DCMIEN 0


//AHB3 peripheral
#define FMCEN 0

//APB1 peripheral
#define UART8EN 31
#define UART7EN 30
#define DACEN 29
#define PWREN 28
#define I2C3EN 23
#define I2C2EN 22
#define I2C1EN 21
#define UART5EN 20
#define UART4EN 19
#define UART3EN 18
#define UART2EN 17
#define SPI3EN 15
#define SPI2EN 14
#define WWDGEN 11
#define TIM14LPEN 8
#define TIM13LPEN 7
#define TIM12LPEN 6
#define TIM7LPEN 5
#define TIM6LPEN 4
#define TIM5LPEN 3
#define TIM4LPEN 2
#define TIM3LPEN 1
#define TIM2LPEN 0




//APB2 peripheral

#define SPI1LPEN 12
#define ADC3LPEN 10
#define ADC2LPEN 9
#define ADC1LPEN 8
#define USART1LPEN 4







 

typedef  enum
{
	AHB1=0,
	AHB2,
	AHB3,
	APB1,
	APB2
}BusName_t;


typedef enum{
	HSE=0,
	HSI,
	PLL
}ClkSrcName_t;   




typedef enum {
	HSE_Crystal=0,
	HSE_RC
	
}HSESrcName_t;


typedef  enum
{
	PLL_HSE=0,
	PLL_HSI
}PLLSrcName_t;


typedef  enum
{
	AHB_Pre1=0,
	AHB_Pre2,
	AHB_Pre4,
	AHB_Pre8,
	AHB_Pre16,
	AHB_Pre64,
	AHB_Pre128,
	AHB_Pre256,
	AHB_Pre512
}AHBPreName_t;


typedef  enum
{
	APB1_Pre1=0,
	APB1_Pre2,
	APB1_Pre4,
	APB1_Pre8,
	APB1_Pre16
}APB1PreName_t;


typedef  enum
{
	APB2_Pre1=0,
	APB2_Pre2,
	APB2_Pre4,
	APB2_Pre8,
	APB2_Pre16
}APB2PreName_t;


typedef  enum
{
	PLLM_option2=0,
	PLLM_option3,
	PLLM_option4,
	PLLM_option5,
	PLLM_option6,
	PLLM_option7,
	PLLM_option8
}PLLMPreName_t;


typedef  enum
{
	PLLN_option50=0,
	PLLN_option52,
	PLLN_option60,
	PLLN_option70,
	PLLN_option72,
	PLLN_option80,
	PLLN_option90
}PLLNPreName_t;


typedef  enum
{
	PLLP_option2=0,
	PLLP_option4,
	PLLP_option6,
	PLLP_option8
}PLLPPreName_t;


typedef  enum
{
	PLLQ_option2=0,
	PLLQ_option3,
	PLLQ_option4,
	PLLQ_option8
}PLLQPreName_t;


