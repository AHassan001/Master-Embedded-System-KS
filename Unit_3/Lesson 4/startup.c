/*
*
*	Startup c code for Cortex M3
*
*/

#include "platform_type.h"


extern int main(void);

void Reset_Handler(void);

void NMI_Handler			(void)	 __attribute__((weak,alias("Reset_Handler")));
void HardFault_Handler		(void) 	 __attribute__((weak,alias("Reset_Handler")));
void MM_mange_Handler		(void) 	 __attribute__((weak,alias("Reset_Handler")));
void BusFault_Handler		(void) 	 __attribute__((weak,alias("Reset_Handler")));
void UsageFault_Handler		(void)	 __attribute__((weak,alias("Reset_Handler")));
void Reserved_Handler		(void)	 __attribute__((weak,alias("Reset_Handler")));
void SVCall_Handler			(void) 	 __attribute__((weak,alias("Reset_Handler")));
void DebugMonitor_Handler	(void)	 __attribute__((weak,alias("Reset_Handler")));
void PendSV_Handler			(void) 	 __attribute__((weak,alias("Reset_Handler")));
void SysTick_Handler		(void) 	 __attribute__((weak,alias("Reset_Handler")));
void WWDG_Handler			(void)	 __attribute__((weak,alias("Reset_Handler")));
void PVD_Handler			(void)	 __attribute__((weak,alias("Reset_Handler")));
void TAMPER_Handler			(void)	 __attribute__((weak,alias("Reset_Handler")));
void RTC_Handler			(void)	 __attribute__((weak,alias("Reset_Handler")));
void FLASH_Handler			(void)	 __attribute__((weak,alias("Reset_Handler")));
void RCC_Handler			(void)	 __attribute__((weak,alias("Reset_Handler")));
void EXTI0_Handler			(void)	 __attribute__((weak,alias("Reset_Handler")));
void EXTI1_Handler			(void)	 __attribute__((weak,alias("Reset_Handler")));
void EXTI2_Handler			(void)	 __attribute__((weak,alias("Reset_Handler")));

extern uint32_t _e_text;
extern uint32_t _s_data;
extern uint32_t _e_data;
extern uint32_t _s_bss;
extern uint32_t _e_bss;

static uint32_t	stack_top[256] ;   //256*4=1024 "1k "
														
void  (* const g_arr_p_fn []) () __attribute__((section(".vectors"))) = {
																			(void (*) ())((uint32_t)stack_top + sizeof(stack_top)), 
																			&Reset_Handler,
																			&NMI_Handler,
																			&HardFault_Handler,
																			&MM_mange_Handler,
																			&BusFault_Handler,
																			&UsageFault_Handler,
																			&Reserved_Handler,
																			&SVCall_Handler,
																			&DebugMonitor_Handler,
																			&Reserved_Handler,       
																			&PendSV_Handler, 
																			&SysTick_Handler,
																			&WWDG_Handler,
																			&PVD_Handler,
																			&TAMPER_Handler,
																			&RTC_Handler,
																			&FLASH_Handler,
																			&RCC_Handler,
																			&EXTI0_Handler,
																			&EXTI1_Handler,
																			&EXTI2_Handler
																		};

void Reset_Handler(void)
{
	uint32_t i=0, bss_size=0, Data_size=0;
	uint8_t* p_src = 0;
	uint8_t* p_dst = 0;
	
	Data_size = ((uint8_t*) &_e_data) - ((uint8_t*) &_s_data);
	
	p_src = (uint8_t*) &_e_text;
	p_dst = (uint8_t*) &_s_data;

	for (i=0; i < Data_size; i++)
	{
		*((uint8_t*)p_dst++) = *((uint8_t*)p_src++);
	}
	
	bss_size = ((uint8_t*) &_s_bss) - ((uint8_t*) &_s_bss);
	
	p_dst = (uint8_t*) &_s_bss;

	for (i=0; i < bss_size; i++)
	{
		*((uint8_t*)p_dst++) = (uint8_t)0;
	}
	
	main();
}
