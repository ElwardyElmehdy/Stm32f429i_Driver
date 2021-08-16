 /******************************************************************************
 *
 * Layer: MCAL
 *
 * File Name: GPIO.c
 *
 * Description: contains all the functions definations for GPIO
 *
 * Author: ELWARDY ELMEHDY
 *******************************************************************************/
#include "GPIO.h"





void vGPIOConfig(GPIOSrcName_t GPIOx,uint32 port_numb,GPIOModeName_t GPIO_Mode){
	switch(GPIOx){
		case 0:
			switch(GPIO_Mode){
				case 0:
					GPIOA_MODER	 &=~(1U<<(port_numb*2));
					GPIOA_MODER	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOA_MODER	 |=(1U<<(port_numb*2));
					GPIOA_MODER	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOA_MODER	 &=~(1U<<(port_numb*2));
					GPIOA_MODER	 |=(1U<<(port_numb*2+1));
					break;
				case 3:
					GPIOA_MODER	 |=(1U<<(port_numb*2));
					GPIOA_MODER	 |=(1U<<(port_numb*2+1));
					break;
				
								
			}
			break;
		case 1:
			switch(GPIO_Mode){
				case 0:
					GPIOB_MODER	 &=~(1U<<(port_numb*2));
					GPIOB_MODER	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOB_MODER	 |=(1U<<(port_numb*2));
					GPIOB_MODER	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOB_MODER	 &=~(1U<<(port_numb*2));
					GPIOB_MODER	 |=(1U<<(port_numb*2+1));
					break;
				case 3:
					GPIOB_MODER	 |=(1U<<(port_numb*2));
					GPIOB_MODER	 |=(1U<<(port_numb*2+1));
					break;
				
			}
			break;
			
			
		case 2:
			switch(GPIO_Mode){
				case 0:
					GPIOC_MODER	 &=~(1U<<(port_numb*2));
					GPIOC_MODER	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOC_MODER	 |=(1U<<(port_numb*2));
					GPIOC_MODER	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOC_MODER	 &=~(1U<<(port_numb*2));
					GPIOC_MODER	 |=(1U<<(port_numb*2+1));
					break;
				case 3:
					GPIOC_MODER	 |=(1U<<(port_numb*2));
					GPIOC_MODER	 |=(1U<<(port_numb*2+1));
					break;
				
			}
			break;
			
		case 3:
			switch(GPIO_Mode){
				case 0:
					GPIOD_MODER	 &=~(1U<<(port_numb*2));
					GPIOD_MODER	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOD_MODER	 |=(1U<<(port_numb*2));
					GPIOD_MODER	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOD_MODER	 &=~(1U<<(port_numb*2));
					GPIOD_MODER	 |=(1U<<(port_numb*2+1));
					break;
				case 3:
					GPIOD_MODER	 |=(1U<<(port_numb*2));
					GPIOD_MODER	 |=(1U<<(port_numb*2+1));
					break;
				
			}
			break;
			
		case 4:
			switch(GPIO_Mode){
				case 0:
					GPIOE_MODER	 &=~(1U<<(port_numb*2));
					GPIOE_MODER	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOE_MODER	 |=(1U<<(port_numb*2));
					GPIOE_MODER	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOE_MODER	 &=~(1U<<(port_numb*2));
					GPIOE_MODER	 |=(1U<<(port_numb*2+1));
					break;
				case 3:
					GPIOE_MODER	 |=(1U<<(port_numb*2));
					GPIOE_MODER	 |=(1U<<(port_numb*2+1));
					break;
				
			}
			break;	
		
				
		case 5:
			switch(GPIO_Mode){
				case 0:
					GPIOF_MODER	 &=~(1U<<(port_numb*2));
					GPIOF_MODER	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOF_MODER	 |=(1U<<(port_numb*2));
					GPIOF_MODER	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOF_MODER	 &=~(1U<<(port_numb*2));
					GPIOF_MODER	 |=(1U<<(port_numb*2+1));
					break;
				case 3:
					GPIOF_MODER	 |=(1U<<(port_numb*2));
					GPIOF_MODER	 |=(1U<<(port_numb*2+1));
					break;
				
			}
		 break;
			
				
		case 6:
			switch(GPIO_Mode){
				case 0:
					GPIOG_MODER	 &=~(1U<<(port_numb*2));
					GPIOG_MODER	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOG_MODER	 |=(1U<<(port_numb*2));
					GPIOG_MODER	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOG_MODER	 &=~(1U<<(port_numb*2));
					GPIOG_MODER	 |=(1U<<(port_numb*2+1));
					break;
				case 3:
					GPIOG_MODER	 |=(1U<<(port_numb*2));
					GPIOG_MODER	 |=(1U<<(port_numb*2+1));
					break;
				
			}
		break;
			
				
		case 7:
			switch(GPIO_Mode){
				case 0:
					GPIOH_MODER	 &=~(1U<<(port_numb*2));
					GPIOH_MODER	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOH_MODER	 |=(1U<<(port_numb*2));
					GPIOH_MODER	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOH_MODER	 &=~(1U<<(port_numb*2));
					GPIOH_MODER	 |=(1U<<(port_numb*2+1));
					break;
				case 3:
					GPIOH_MODER	 |=(1U<<(port_numb*2));
					GPIOH_MODER	 |=(1U<<(port_numb*2+1));
					break;
					
													
			}
		  break; 
								
			
	}
	
		
	
}

void vPullConfig(GPIOSrcName_t GPIOx,uint32 port_numb,GPIOPullUpDown_t PULL_UpDown){
	switch(GPIOx){
		case 0:
			
			
			switch(PULL_UpDown){
				case 0:
					GPIOA_PUPDR 	 &=~(1U<<(port_numb*2));
					GPIOA_PUPDR 	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOA_PUPDR 	 |=(1U<<(port_numb*2));
					GPIOA_PUPDR 	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOA_PUPDR 	 &=~(1U<<(port_numb*2));
					GPIOA_PUPDR	 |=(1U<<(port_numb*2+1));
					break;
				
				
								
			}
			break;
			
		case 1:
			
			
			switch(PULL_UpDown){
				case 0:
					GPIOB_PUPDR  	 &=~(1U<<(port_numb*2));
					GPIOB_PUPDR  	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOB_PUPDR  	 |=(1U<<(port_numb*2));
					GPIOB_PUPDR  	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOB_PUPDR  	 &=~(1U<<(port_numb*2));
					GPIOB_PUPDR 	 |=(1U<<(port_numb*2+1));
					break;
				
				
								
			}
			break;
		case 2:
			
			
			switch(PULL_UpDown){
				case 0:
					GPIOC_PUPDR   	 &=~(1U<<(port_numb*2));
					GPIOC_PUPDR   	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOC_PUPDR   	 |=(1U<<(port_numb*2));
					GPIOC_PUPDR   	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOC_PUPDR   	 &=~(1U<<(port_numb*2));
					GPIOC_PUPDR  	 |=(1U<<(port_numb*2+1));
					break;
				
				
								
			}
			break;
			
			
		case 3:
			
			
			
			
			switch(PULL_UpDown){
				case 0:
					GPIOD_PUPDR    	 &=~(1U<<(port_numb*2));
					GPIOD_PUPDR    	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOD_PUPDR    	 |=(1U<<(port_numb*2));
					GPIOD_PUPDR    	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOD_PUPDR    	 &=~(1U<<(port_numb*2));
					GPIOD_PUPDR   	 |=(1U<<(port_numb*2+1));
					break;
				
				
								
			}
			break;
		case 4:
			
			
			
			switch(PULL_UpDown){
				case 0:
					GPIOE_PUPDR     	 &=~(1U<<(port_numb*2));
					GPIOE_PUPDR     	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOE_PUPDR     	 |=(1U<<(port_numb*2));
					GPIOE_PUPDR     	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOE_PUPDR     	 &=~(1U<<(port_numb*2));
					GPIOE_PUPDR    	 |=(1U<<(port_numb*2+1));
					break;
				
				
								
			}
			
			break;
				
		case 5:
			
		
			
			switch(PULL_UpDown){
				case 0:
					GPIOF_PUPDR      	 &=~(1U<<(port_numb*2));
					GPIOF_PUPDR      	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOF_PUPDR      	 |=(1U<<(port_numb*2));
					GPIOF_PUPDR      	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOF_PUPDR      	 &=~(1U<<(port_numb*2));
					GPIOF_PUPDR     	 |=(1U<<(port_numb*2+1));
					break;
				
				
								
			}
			break;
				
		case 6:
			
			
			
			switch(PULL_UpDown){
				case 0:
					GPIOG_PUPDR       	 &=~(1U<<(port_numb*2));
					GPIOG_PUPDR       	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOG_PUPDR       	 |=(1U<<(port_numb*2));
					GPIOG_PUPDR       	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOG_PUPDR       	 &=~(1U<<(port_numb*2));
					GPIOG_PUPDR      	 |=(1U<<(port_numb*2+1));
					break;
				
				
								
			}
			
			break;
			
			
				
		case 7:
			
			
			switch(PULL_UpDown){
				case 0:
					GPIOH_PUPDR        	 &=~(1U<<(port_numb*2));
					GPIOH_PUPDR        	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOH_PUPDR        	 |=(1U<<(port_numb*2));
					GPIOH_PUPDR        	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOH_PUPDR        	 &=~(1U<<(port_numb*2));
					GPIOH_PUPDR       	 |=(1U<<(port_numb*2+1));
					break;
				
				
								
			}
			
			break;					
			
	}
			
}





void vOutputConfig(GPIOSrcName_t GPIOx,uint32 port_numb,GPIOOutMode_t OutMode,GPIOOutSpeed_t OutSpeed){
	switch(GPIOx){
		case 0:
			switch(OutMode){
				case 0:
					GPIOA_OTYPER	 &=~(1U<<(port_numb));
					break;
				case 1:
					GPIOA_OTYPER	 |=(1U<<(port_numb));
					break;
				
									
			}
			
			switch(OutSpeed){
				case 0:
					GPIOA_OSPEEDR	 &=~(1U<<(port_numb*2));
					GPIOA_OSPEEDR	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOA_OSPEEDR	 |=(1U<<(port_numb*2));
					GPIOA_OSPEEDR	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOA_OSPEEDR	 &=~(1U<<(port_numb*2));
					GPIOA_OSPEEDR	 |=(1U<<(port_numb*2+1));
					break;
				case 3:
					GPIOA_OSPEEDR	 |=(1U<<(port_numb*2));
					GPIOA_OSPEEDR	 |=(1U<<(port_numb*2+1));
					break;
				
								
			}
			break;
		case 1:
			switch(OutMode){
				case 0:
					GPIOB_OTYPER	 &=~(1U<<(port_numb));
					break;
				case 1:
					GPIOB_OTYPER	 |=(1U<<(port_numb));
					break;
				
									
			}
			
			switch(OutSpeed){
				case 0:
					GPIOB_OSPEEDR	 &=~(1U<<(port_numb*2));
					GPIOB_OSPEEDR	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOB_OSPEEDR	 |=(1U<<(port_numb*2));
					GPIOB_OSPEEDR	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOB_OSPEEDR	 &=~(1U<<(port_numb*2));
					GPIOB_OSPEEDR	 |=(1U<<(port_numb*2+1));
					break;
				case 3:
					GPIOB_OSPEEDR	 |=(1U<<(port_numb*2));
					GPIOB_OSPEEDR	 |=(1U<<(port_numb*2+1));
					break;
				
								
			}	
			break;
		case 2:
			switch(OutMode){
				case 0:
					GPIOC_OTYPER	 &=~(1U<<(port_numb));
					break;
				case 1:
					GPIOC_OTYPER	 |=(1U<<(port_numb));
					break;
				
									
			}	
			
			switch(OutSpeed){
				case 0:
					GPIOC_OSPEEDR	 &=~(1U<<(port_numb*2));
					GPIOC_OSPEEDR	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOC_OSPEEDR	 |=(1U<<(port_numb*2));
					GPIOC_OSPEEDR	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOC_OSPEEDR	 &=~(1U<<(port_numb*2));
					GPIOC_OSPEEDR	 |=(1U<<(port_numb*2+1));
					break;
				case 3:
					GPIOC_OSPEEDR	 |=(1U<<(port_numb*2));
					GPIOC_OSPEEDR	 |=(1U<<(port_numb*2+1));
					break;
				
								
			}
			break;
		
		case 3:
			switch(OutMode){
				case 0:
					GPIOD_OTYPER	 &=~(1U<<(port_numb));
					break;
				case 1:
					GPIOD_OTYPER	 |=(1U<<(port_numb));
					break;
				
									
			}
			
			switch(OutSpeed){
				case 0:
					GPIOD_OSPEEDR	 &=~(1U<<(port_numb*2));
					GPIOD_OSPEEDR	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOD_OSPEEDR	 |=(1U<<(port_numb*2));
					GPIOD_OSPEEDR	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOD_OSPEEDR	 &=~(1U<<(port_numb*2));
					GPIOD_OSPEEDR	 |=(1U<<(port_numb*2+1));
					break;
				case 3:
					GPIOD_OSPEEDR	 |=(1U<<(port_numb*2));
					GPIOD_OSPEEDR	 |=(1U<<(port_numb*2+1));
					break;
				
								
			}	
			break;
		case 4:
			switch(OutMode){
				case 0:
					GPIOE_OTYPER	 &=~(1U<<(port_numb));
					break;
				case 1:
					GPIOE_OTYPER	 |=(1U<<(port_numb));
					break;
				
									
			}
			
			switch(OutSpeed){
				case 0:
					GPIOE_OSPEEDR	 &=~(1U<<(port_numb*2));
					GPIOE_OSPEEDR	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOE_OSPEEDR	 |=(1U<<(port_numb*2));
					GPIOE_OSPEEDR	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOE_OSPEEDR	 &=~(1U<<(port_numb*2));
					GPIOE_OSPEEDR	 |=(1U<<(port_numb*2+1));
					break;
				case 3:
					GPIOE_OSPEEDR	 |=(1U<<(port_numb*2));
					GPIOE_OSPEEDR	 |=(1U<<(port_numb*2+1));
					break;
				
								
			}
			break;
		case 5:
				switch(OutMode){
				case 0:
					GPIOF_OTYPER	 &=~(1U<<(port_numb));
					break;
				case 1:
					GPIOF_OTYPER	 |=(1U<<(port_numb));
					break;
				
									
			}
			
			switch(OutSpeed){
				case 0:
					GPIOF_OSPEEDR	 &=~(1U<<(port_numb*2));
					GPIOF_OSPEEDR	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOF_OSPEEDR	 |=(1U<<(port_numb*2));
					GPIOF_OSPEEDR	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOF_OSPEEDR	 &=~(1U<<(port_numb*2));
					GPIOF_OSPEEDR	 |=(1U<<(port_numb*2+1));
					break;
				case 3:
					GPIOF_OSPEEDR	 |=(1U<<(port_numb*2));
					GPIOF_OSPEEDR	 |=(1U<<(port_numb*2+1));
					break;
				
								
			}
			break;
		
		case 6:
			switch(OutMode){
				case 0:
					GPIOG_OTYPER	 &=~(1U<<(port_numb));
					break;
				case 1:
					GPIOG_OTYPER	 |=(1U<<(port_numb));
					break;
				
									
			}	
			
			switch(OutSpeed){
				case 0:
					GPIOG_OSPEEDR	 &=~(1U<<(port_numb*2));
					GPIOG_OSPEEDR	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOG_OSPEEDR	 |=(1U<<(port_numb*2));
					GPIOG_OSPEEDR	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOG_OSPEEDR	 &=~(1U<<(port_numb*2));
					GPIOG_OSPEEDR	 |=(1U<<(port_numb*2+1));
					break;
				case 3:
					GPIOG_OSPEEDR	 |=(1U<<(port_numb*2));
					GPIOG_OSPEEDR	 |=(1U<<(port_numb*2+1));
					break;
				
								
			}
			break;
		case 7:
			switch(OutMode){
				case 0:
					GPIOH_OTYPER	 &=~(1U<<(port_numb));
					break;
				case 1:
					GPIOH_OTYPER	 |=(1U<<(port_numb));
					break;
				
									
			}
			
			switch(OutSpeed){
				case 0:
					GPIOH_OSPEEDR	 &=~(1U<<(port_numb*2));
					GPIOH_OSPEEDR	 &=~(1U<<(port_numb*2+1));
					break;
				case 1:
					GPIOH_OSPEEDR	 |=(1U<<(port_numb*2));
					GPIOH_OSPEEDR	 &=~(1U<<(port_numb*2+1));
					break;
				case 2:
					GPIOH_OSPEEDR	 &=~(1U<<(port_numb*2));
					GPIOH_OSPEEDR	 |=(1U<<(port_numb*2+1));
					break;
				case 3:
					GPIOH_OSPEEDR	 |=(1U<<(port_numb*2));
					GPIOH_OSPEEDR	 |=(1U<<(port_numb*2+1));
					break;
				
								
			}
			break;
		}
	}
			
		
			
		
			
			
			
			
			
			
			
		 	
			
	
	




uint32 uGPIORead(GPIOSrcName_t GPIOx,uint32 port_numb){
	
	switch(GPIOx){
		case 0:
			return (GPIOA_IDR&(1U<<port_numb));
		  
		case 1:
			return (GPIOB_IDR&(1U<<port_numb));
		case 2:
			return (GPIOC_IDR&(1U<<port_numb));
		case 3:
			return (GPIOD_IDR&(1U<<port_numb));
		case 4:
			return (GPIOE_IDR&(1U<<port_numb));	
		case 5:
			return (GPIOF_IDR&(1U<<port_numb));
		case 6:
			return (GPIOG_IDR&(1U<<port_numb));
		case 7:
			return (GPIOH_IDR&(1U<<port_numb));
	}
	
	
}



		
 void vGPIOSetReset(GPIOSrcName_t GPIOx,uint32 port_numb,uint32 mode){
 		switch(GPIOx){
		case 0:
			if(mode==0){
				GPIOA_ODR   &=~(1U<<port_numb);break;
			}
			else{
					GPIOA_ODR   |=(1U<<port_numb);break;
			}
			
			
		case 1:
				if(mode==0){
				GPIOB_ODR   &=~(1U<<port_numb);break;
			}
			else{
					GPIOB_ODR   |=(1U<<port_numb);break;
			}
		case 2:
				if(mode==0){
				GPIOC_ODR   &=~(1U<<port_numb);break;
			}
			else{
					GPIOC_ODR   |=(1U<<port_numb);break;
			}
		case 3:
				if(mode==0){
				GPIOD_ODR   &=~(1U<<port_numb);break;
			}
			else{
					GPIOD_ODR   |=(1U<<port_numb);break;
			}
		case 4:
				if(mode==0){
				GPIOE_ODR   &=~(1U<<port_numb);break;
			}
			else{
					GPIOE_ODR   |=(1U<<port_numb);break;
			}	
		case 5:
				if(mode==0){
				GPIOF_ODR   &=~(1U<<port_numb);break;
			}
			else{
					GPIOF_ODR   |=(1U<<port_numb);break;
			}
		case 6:
				if(mode==0){
				GPIOG_ODR   &=~(1U<<port_numb);break;
			}
			else{
					GPIOG_ODR   |=(1U<<port_numb);break;
			}
		case 7:
				if(mode==0){
				GPIOH_ODR   &=~(1U<<port_numb);break;
			}
			else{
					GPIOH_ODR   |=(1U<<port_numb);break;
			}
	}
 }
 
 
 
 
 void vGPIOLock(GPIOSrcName_t GPIOx,uint32 port_numb){
 	switch(GPIOx){
		case 0:
			GPIOA_LCKR |=(1U<<port_numb);
			GPIOA_LCKR |=(1U<<16);
			break;
					
		case 1:
			GPIOB_LCKR |=(1U<<port_numb);
			GPIOB_LCKR |=(1U<<16);
			break;
			
		case 2:
			GPIOC_LCKR |=(1U<<port_numb);
			GPIOC_LCKR |=(1U<<16);
			break;
			
		case 3:
			GPIOD_LCKR |=(1U<<port_numb);
			GPIOD_LCKR |=(1U<<16);
			break;
			
		case 4:
			GPIOE_LCKR |=(1U<<port_numb);
			GPIOE_LCKR |=(1U<<16);
			break;
			
		case 5:
			GPIOF_LCKR |=(1U<<port_numb);
			GPIOF_LCKR |=(1U<<16);
			break;
			
		case 6:
			GPIOG_LCKR |=(1U<<port_numb);
			GPIOG_LCKR |=(1U<<16);
			break;
			
		case 7:
		    GPIOH_LCKR |=(1U<<port_numb);
			GPIOH_LCKR |=(1U<<16);
			break;
			
	}
 	
}

void vGPIOPinSetAltFn(GPIOSrcName_t GPIOx,uint8 port_numb,GPIOAlternateFunction_t Alt_Value)
{
	
	if(port_numb <=7)
	{
		switch(GPIOx)
		{
			case 0:
			 GPIOA_AFRL |= (Alt_Value << (4*port_numb)); break;
			case 1:
			 GPIOB_AFRL |= (Alt_Value << (4*port_numb)); break;
			case 2:
			 GPIOC_AFRL |= (Alt_Value << (4*port_numb)); break;
			case 3:
			 GPIOD_AFRL |= (Alt_Value << (4*port_numb)); break;
			case 4:
			 GPIOE_AFRL |= (Alt_Value << (4*port_numb)); break;
			case 5:
			 GPIOF_AFRL |= (Alt_Value << (4*port_numb)); break;
			case 6:
			 GPIOG_AFRL |= (Alt_Value << (4*port_numb)); break;
			case 7:
			 GPIOH_AFRL |= (Alt_Value << (4*port_numb)); break;		
						
		}
		
	}
	
	else
	{
		switch(GPIOx)
		{
			case 0:
			 GPIOA_AFRH |= (Alt_Value << (4*(port_numb % 8))); break;
			case 1:
			 GPIOB_AFRH |= (Alt_Value << (4*(port_numb % 8))); break;
			case 2:
			 GPIOC_AFRH |= (Alt_Value << (4*(port_numb % 8))); break;
			case 3:
			 GPIOD_AFRH |= (Alt_Value << (4*(port_numb % 8))); break;
			case 4:
			 GPIOE_AFRH |= (Alt_Value << (4*(port_numb % 8))); break;
			case 5:
			 GPIOF_AFRH |= (Alt_Value << (4*(port_numb % 8))); break;
			case 6:
			 GPIOG_AFRH |= (Alt_Value << (4*(port_numb % 8))); break;
			case 7:
			 GPIOH_AFRH |= (Alt_Value << (4*(port_numb % 8))); break;		
						
		}
		
		
	}
	
	
	
}




