/*
 *
 * 	Application to toggle a led at Port F pin 3 in Tiva c "tm4c123" 
 *
 */

#include "platform_type.h"

#define	SYSCTL_RCGC2_R 		*((vuint32_t *)(0x400FE108))

#define	GPIO_PORTF_DIR_R 	*((vuint32_t *)(0x40025400))
#define	GPIO_PORTF_DEN_R 	*((vuint32_t *)(0x4002551C))
#define	GPIO_PORTF_DATA_R 	*((vuint32_t *)(0x400253FC))

#define Bit_3 	(1<<3)

void main(void)
{
	vuint32_t delay_count = 0;
	
	SYSCTL_RCGC2_R = 0x20;
	
	for(delay_count=0; delay_count < 200 ; delay_count++);  				// delay

	GPIO_PORTF_DIR_R |= Bit_3;
	GPIO_PORTF_DEN_R |= Bit_3;
    /* Loop forever */
	
	while(1)
	{
		GPIO_PORTF_DATA_R ^= Bit_3;
		
		for(delay_count=0; delay_count < 200000 ; delay_count++);  			// delay

	}
}
