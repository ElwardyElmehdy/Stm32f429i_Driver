 /******************************************************************************
 *
 * Layer: MCAL
 *
 * File Name: RCC.c
 *
 * Description: contains all the functions definations for RCC
 *
 * Author: ELWARDY ELMEHDY
 *******************************************************************************/
#include "RCC.h"


void vRCC_SetSYSCLK(ClkSrcName_t ClkSrc, HSESrcName_t HSESRC, PLLSrcName_t PLLSrc,AHBPreName_t AHB_Prescaler, APB1PreName_t APB1_Prescaler, APB2PreName_t APB2_Prescaler)
{

	switch(ClkSrc)
	{
		//HSE
		case 0:
			switch(HSESRC)
			{
				//HSE_Crystal
				case 0: 
				RCC_CR |=(1U<<16); //Enable HSE
				RCC_CR &=~(1U<<18); // Disable BYP
				RCC_CFGR |=(1U<<0); // SYSCLK equal to HSE
				RCC_CFGR &=~(1U<<1);
				break; 
				//HSE_RC
				case 1: 
				RCC_CR |=(1U<<16); //Enable HSE
				RCC_CR |=(1U<<18); //Enable BYP
				RCC_CFGR |=(1U<<0); // SYSCLK equal to HSE
				RCC_CFGR &=~(1U<<1);
				break;
				
				
			}
		break;
		
		//HSI
		case 1:
			RCC_CR |=(1U<<0); //Enable HSI
			RCC_CFGR &=~(1U<<0); // SYSCLK equal to HSI
			RCC_CFGR &=~(1U<<1);
		break;
		
		//PLL
		case 2:
			switch(PLLSrc)
			{
				//PLL_HSE
				case 0: 
				RCC_CR |=(1U<<24); //Enable PLL
				RCC_CR |=(1U<<16); //Enable HSE
				RCC_PLLCFGR |=(1U<<22); //Select PLL source equal to HSE
				RCC_CFGR &=~(1U<<0); // SYSCLK equal to PLL
				RCC_CFGR |=(1U<<1);
				break;
				
				//PLL_HSI
				case 1: 
				RCC_CR |=(1U<<24); //Enable PLL
				RCC_CR &=~(1U<<16); //Enable HSI
				RCC_PLLCFGR &=~(1U<<22); //Select PLL source equal to HSI
				RCC_CFGR &=~(1U<<0); // SYSCLK equal to PLL
				RCC_CFGR |=(1U<<1);
				break;
				
			}
		break;
		
		
	}
	
	
	switch(AHB_Prescaler){
		case 0:
			RCC_CFGR |= (0<<4);break;
		case 1:
			RCC_CFGR |= (8<<4);break;
    case 2:
			RCC_CFGR |= (9<<4);break;		
		case 3:
			RCC_CFGR |= (10<<4);break;
		case 4:
			RCC_CFGR |= (11<<4);break;
    case 5:
			RCC_CFGR |= (12<<4);break;
    case 6:
			RCC_CFGR |= (13<<4);break;
		case 7:
			RCC_CFGR |= (14<<4);break;
    case 8:
			RCC_CFGR |= (15<<4);break;				
	}
	
	switch(APB1_Prescaler){
		case 0:
			RCC_CFGR |= (0<<10);break;
		case 1:
			RCC_CFGR |= (4<<10);break;
    case 2:
			RCC_CFGR |= (5<<10);break;		
		case 3:
			RCC_CFGR |= (6<<10);break;
		case 4:
			RCC_CFGR |= (7<<10);break;
    			
	}
	
	
	switch(APB2_Prescaler){
		case 0:
			RCC_CFGR |= (0<<13);break;
		case 1:
			RCC_CFGR |= (4<<13);break;
    case 2:
			RCC_CFGR |= (5<<13);break;		
		case 3:
			RCC_CFGR |= (6<<13);break;
		case 4:
			RCC_CFGR |= (7<<13);break;
    			
	}
	
	
	
	//Task Prescalers
	
}



void vRCC_setPLLCFGR(PLLMPreName_t option_M,PLLNPreName_t option_N ,PLLPPreName_t option_P,PLLQPreName_t option_Q ){
	switch (option_M){
		case 0:
			RCC_PLLCFGR &=~(1U<<0);
			RCC_PLLCFGR |=(1U<<1);
			break;
		case 1:
			RCC_PLLCFGR |=(1U<<0);
			RCC_PLLCFGR |=(1U<<1);
			break;
		
		case 2:
			RCC_PLLCFGR &=~(1U<<0);
			RCC_PLLCFGR &=~(1U<<1);	
			RCC_PLLCFGR |=(1U<<2);
			break;
		case 3:
			RCC_PLLCFGR |=(1U<<0);
			RCC_PLLCFGR &=~(1U<<1);	
			RCC_PLLCFGR |=(1U<<2);
			break;	
		case 4:
			RCC_PLLCFGR &=~(1U<<0);
			RCC_PLLCFGR |=(1U<<1);	
			RCC_PLLCFGR |=(1U<<2);
			break;
		case 5:
			RCC_PLLCFGR |=(1U<<0);
			RCC_PLLCFGR |=(1U<<1);	
			RCC_PLLCFGR |=(1U<<2);	
			break;
		case 6:
			RCC_PLLCFGR &=~(1U<<0);
			RCC_PLLCFGR &=~(1U<<1);	
			RCC_PLLCFGR &=~(1U<<2);	
			RCC_PLLCFGR |=(1U<<3);	
		    break;
			
			
	}
	
	switch (option_N){
		case 0:
			RCC_PLLCFGR &=~(1U<<6);
			RCC_PLLCFGR |=(1U<<7);
			RCC_PLLCFGR &=~(1U<<8);
			RCC_PLLCFGR &=~(1U<<9);
			RCC_PLLCFGR |=(1U<<10);
			RCC_PLLCFGR |=(1U<<11);
			RCC_PLLCFGR &=~(1U<<12);
			RCC_PLLCFGR &=~(1U<<13);
			RCC_PLLCFGR &=~(1U<<14);
			break;
			
		case 1:
			RCC_PLLCFGR &=~(1U<<6);
			RCC_PLLCFGR &=~(1U<<7);
			RCC_PLLCFGR |=(1U<<8);
			RCC_PLLCFGR &=~(1U<<9);
			RCC_PLLCFGR |=(1U<<10);
			RCC_PLLCFGR |=(1U<<11);
			RCC_PLLCFGR &=~(1U<<12);
			RCC_PLLCFGR &=~(1U<<13);
			RCC_PLLCFGR &=~(1U<<14);
			break;
		
		case 2:
			RCC_PLLCFGR &=~(1U<<6);
			RCC_PLLCFGR &=~(1U<<7);
			RCC_PLLCFGR |=(1U<<8);
			RCC_PLLCFGR |=(1U<<9);
			RCC_PLLCFGR |=(1U<<10);
			RCC_PLLCFGR |=(1U<<11);
			RCC_PLLCFGR &=~(1U<<12);
			RCC_PLLCFGR &=~(1U<<13);
			RCC_PLLCFGR &=~(1U<<14);
			break;
		case 3:
			RCC_PLLCFGR &=~(1U<<6);
			RCC_PLLCFGR |=(1U<<7);
			RCC_PLLCFGR |=(1U<<8);
			RCC_PLLCFGR &=~(1U<<9);
			RCC_PLLCFGR &=~(1U<<10);
			RCC_PLLCFGR &=~(1U<<11);
			RCC_PLLCFGR |=(1U<<12);
			RCC_PLLCFGR &=~(1U<<13);
			RCC_PLLCFGR &=~(1U<<14);
			break;	
		case 4:
			RCC_PLLCFGR &=~(1U<<6);
			RCC_PLLCFGR &=~(1U<<7);
			RCC_PLLCFGR &=~(1U<<8);
			RCC_PLLCFGR |=(1U<<9);
			RCC_PLLCFGR &=~(1U<<10);
			RCC_PLLCFGR &=~(1U<<11);
			RCC_PLLCFGR |=(1U<<12);
			RCC_PLLCFGR &=~(1U<<13);
			RCC_PLLCFGR &=~(1U<<14);
			break;
		case 5:
			RCC_PLLCFGR &=~(1U<<6);
			RCC_PLLCFGR &=~(1U<<7);
			RCC_PLLCFGR &=~(1U<<8);
			RCC_PLLCFGR &=~(1U<<9);
			RCC_PLLCFGR |=(1U<<10);
			RCC_PLLCFGR &=~(1U<<11);
			RCC_PLLCFGR |=(1U<<12);
			RCC_PLLCFGR &=~(1U<<13);
			RCC_PLLCFGR &=~(1U<<14);
			break;	
		case 6:
			RCC_PLLCFGR &=~(1U<<6);
			RCC_PLLCFGR |=(1U<<7);
			RCC_PLLCFGR &=~(1U<<8);
			RCC_PLLCFGR |=(1U<<9);
			RCC_PLLCFGR |=(1U<<10);
			RCC_PLLCFGR &=~(1U<<11);
			RCC_PLLCFGR |=(1U<<12);
			RCC_PLLCFGR &=~(1U<<13);
			RCC_PLLCFGR &=~(1U<<14);
			break;	
			
			
	}
	
	switch (option_P){
		case 0:
			RCC_PLLCFGR &=~(1U<<16);
			RCC_PLLCFGR &=~(1U<<17);
			break;
		case 1:
			RCC_PLLCFGR |=(1U<<16);
			RCC_PLLCFGR &=~(1U<<17);
			break;
		
		case 2:
			RCC_PLLCFGR &=~(1U<<16);
			RCC_PLLCFGR |=(1U<<17);
			break;
		case 3:
			RCC_PLLCFGR |=(1U<<16);
			RCC_PLLCFGR |=(1U<<17);
			break;	
		
			
			
	}
	
	switch (option_Q){
		case 0:
			RCC_PLLCFGR &=~(1U<<24);
			RCC_PLLCFGR |=(1U<<25);
			break;
		case 1:
			RCC_PLLCFGR |=(1U<<24);
			RCC_PLLCFGR |=(1U<<25);
			break;
		
		case 2:
			RCC_PLLCFGR &=~(1U<<24);
			RCC_PLLCFGR &=~(1U<<25);	
			RCC_PLLCFGR |=(1U<<26);
			break;
		case 3:
			RCC_PLLCFGR &=~(1U<<24);
			RCC_PLLCFGR &=~(1U<<25);	
			RCC_PLLCFGR &=~(1U<<26);
			RCC_PLLCFGR |=(1U<<27);
			break;	
		
		
			
	}
	
}



void vRCC_EnPerClk(BusName_t BusName, uint8 PerName)
{
	switch(BusName)
	{
		//AHB1
		case 0: RCC_AHB1ENR |=(1U<<PerName); break;
		
		//AHB2
		case 1: RCC_AHB2ENR |=(1U<<PerName); break;
		
		//AHB3
		case 2: RCC_AHB3ENR |=(1U<<PerName); break;
		
		//APB1
		case 3: RCC_APB1ENR |=(1U<<PerName); break;
		
		//APB2
		case 4: RCC_APB2ENR |=(1U<<PerName); break;
		
		
	}
	
	
}
