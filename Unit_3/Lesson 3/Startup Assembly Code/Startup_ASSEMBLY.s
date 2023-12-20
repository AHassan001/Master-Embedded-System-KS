/*
*
*	Startup for STM32F103
*	Author: Abdelrahman Maher
*
*/

.global _reset

.section .vectors

.word 	_stack_top			/* 	Stack pointer 	      */
.word 	_reset 				/*	Reset	 	 	 (1)  */
.word 	Vector_handler  	/* 	NMI   		 	 (2)  */
.word 	Vector_handler 		/* 	HardFault 	  	 (3)  */
.word 	Vector_handler  	/* 	MM mange		 (4)  */
.word 	Vector_handler  	/* 	BusFault      	 (5)  */
.word 	Vector_handler  	/* 	UsageFaultt   	 (6)  */
.word 	Vector_handler  	/* 	Reserved   		 (7)  */
.word 	Vector_handler  	/* 	SVCall   		 (8)  */
.word 	Vector_handler  	/* 	DebugMonitor 	 (9)  */
.word 	Vector_handler  	/* 	Reserved     	 (10) */
.word 	Vector_handler  	/* 	PendSV 			 (11) */
.word 	Vector_handler  	/* 	SysTick  		 (12) */
.word 	Vector_handler  	/* 	WWDG   		 	 (13) */
.word 	Vector_handler  	/* 	PVD   		 	 (14) */
.word 	Vector_handler  	/* 	TAMPER   		 (15) */
.word 	Vector_handler  	/* 	RTC   			 (16) */
.word 	Vector_handler  	/* 	FLASH     	 	 (17) */
.word 	Vector_handler  	/* 	RCC      		 (18) */
.word 	Vector_handler  	/* 	EXTI0        	 (19) */
.word 	Vector_handler  	/* 	EXTI1        	 (20) */
.word 	Vector_handler  	/* 	EXTI2        	 (21) */

.section .text
_reset: 
		bl main
		b .
		
.thumb_func
		
Vector_handler:
		b _reset

