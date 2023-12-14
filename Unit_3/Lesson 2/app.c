#include "uart.h"

unsigned char string_buffer[100] = "learn-in-depth <Abdelrahman>"; 	
unsigned char const const_string_buffer[100] = "learn-in-depth <Abdelrahman>"; 	

void main()
{
	Send_String (string_buffer);

}