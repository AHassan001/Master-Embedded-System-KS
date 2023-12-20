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
extern uint32_t _stack_top;

uint32_t  vectors[] __attribute__((section(".vectors"))) = {
															(uint32_t) &_stack_top, 
															(uint32_t) &Reset_Handler,
															(uint32_t) &NMI_Handler,
															(uint32_t) &HardFault_Handler,
															(uint32_t) &MM_mange_Handler,
															(uint32_t) &BusFault_Handler,
															(uint32_t) &UsageFault_Handler,
															(uint32_t) &Reserved_Handler,
															(uint32_t) &SVCall_Handler,
															(uint32_t) &DebugMonitor_Handler,
															(uint32_t) &Reserved_Handler,       
															(uint32_t) &PendSV_Handler, 
															(uint32_t) &SysTick_Handler,
															(uint32_t) &WWDG_Handler,
															(uint32_t) &PVD_Handler,
															(uint32_t) &TAMPER_Handler,
															(uint32_t) &RTC_Handler,
															(uint32_t) &FLASH_Handler,
															(uint32_t) &RCC_Handler,
															(uint32_t) &EXTI0_Handler,
															(uint32_t) &EXTI1_Handler,
															(uint32_t) &EXTI2_Handler	
														};

void Reset_Handler(void)
{
	uint32_t i=0;
	
	uint32_t Data_size = ((uint8_t*) &_e_data) - ((uint8_t*) &_s_data);
	
	uint8_t* p_src = (uint8_t*) &_e_text;
	uint8_t* p_dst = (uint8_t*) &_s_data;

	for (i=0; i < Data_size; i++)
	{
		*((uint8_t*)p_dst++) = *((uint8_t*)p_src++);
	}
	
	
	
	uint32_t bss_size = ((uint8_t*) &_s_bss) - ((uint8_t*) &_s_bss);
	
	p_dst = (uint8_t*) &_s_bss;

	for (i=0; i < bss_size; i++)
	{
		*((uint8_t*)p_dst++) = (uint8_t)0;
	}
	
	main();
}
