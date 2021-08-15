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




typedef  enum
{
	AHB1=0,
	AHB2,
	AHB3,
	APB1,
	APB2
}BusName_t;


typedef enum{
	HSE=0;
	HSI;
	PLL
}ClkSrcName_t;   




typedef enum {
	HSE_Crystal=0;
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


