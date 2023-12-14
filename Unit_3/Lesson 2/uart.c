#include "uart.h"

#define UART_DR  *((volatile unsigned int* const)((unsigned int*)0x101f1000))

void Send_String (unsigned char* P_TX_buffer)
{
	while( *P_TX_buffer != 0)
	{
		UART_DR = *P_TX_buffer;
		P_TX_buffer++;
	}	
}