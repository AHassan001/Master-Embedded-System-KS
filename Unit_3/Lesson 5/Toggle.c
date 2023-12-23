/*
 *
 * Application to toggle a led  at pin 13 GPIOA
 *
 */

#include "platform_type.h"
#include <stdlib.h>


#define RCC_B_A			0x40021000
#define GPIOA_B_A 		0x40010800

#define RCC_APB2ENR  	*((vuint32_t *)(RCC_B_A   + 0x18))
#define GPIOA_CRH 		*((vuint32_t *)(GPIOA_B_A + 0x04))
#define GPIOA_ODR    	*((vuint32_t *)(GPIOA_B_A + 0x0c))

#define RCC_IOPAEN 		(1<<2)

extern void HardFault_Handler(void); 

typedef union
{
	vuint32_t  All_Pins;

	struct
	{
		vuint32_t reserved : 13;
		vuint32_t pin13 : 1;
	}Pins;
	
}R_ODR_t;

volatile R_ODR_t* R_ODR = ((volatile R_ODR_t*)(GPIOA_B_A + 0x0c));

unsigned char const g_c_i_variables = 10;
unsigned char g_i_variables = 10;
unsigned char g_i_W_0_variables = 0;
unsigned char g_un_variables;

void* _sbrk (uint32_t incr)
{
	extern uint32_t _e_bss;
	extern uint32_t _heap_length;
	
	static uint8_t* heap_top = NULL;
	uint8_t* prev_heap_top = NULL;
	
	if (heap_top == NULL)
		heap_top = (uint8_t*) &_e_bss;
	
	prev_heap_top = heap_top;

	if ( (heap_top + incr)  > (uint8_t*)&_heap_length )
		return (void*) NULL;
	
	heap_top += incr;
	
	return (void*) prev_heap_top;
	
}

void main(void)
{

	uint32_t i=0;
	uint32_t * ptr;
	
	ptr = (uint32_t*)malloc(4);
	
	
	RCC_APB2ENR |= RCC_IOPAEN; 		//set bit 2 to 1 to enable RCC to GPIOA

	GPIOA_CRH 	&= 0xFF0FFFFF;		// clear bits from bit 20 to 23
	GPIOA_CRH 	|= 0x00200000;		// set bits 21 to 1 (bits from 20  to 23 = 2)

	
	while(1)
	{
		R_ODR -> Pins.pin13 = 1;
		for(i=0; i < 10000 ; i++);  			// delay
		R_ODR -> Pins.pin13 = 0;
		for(i=0; i < 10000 ; i++);  			// delay

	}
	
	free(ptr);

}

void HardFault_Handler(void)
{
	
	
}