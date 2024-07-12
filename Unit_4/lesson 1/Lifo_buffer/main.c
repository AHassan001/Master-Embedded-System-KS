/*
 * main.c
 *
 *  Created on: Dec 26, 2023
 *      Author: Abdelrahman Maher
 */

#include "lifo.h"

#define DataType	uint16_t
#define MaxSize	5

DataType buffer[MaxSize];

void main()
{
	Lifo_buffer_t UART_Lifo;
	DataType i;
	uint32_t status;
	DataType value=0,temp=0;

	//init the stack
	if( ((Lifo_init(&UART_Lifo,buffer,5)) == Lifo_NULL) )
		printf("No available space");

	status = Lifo_Emptyy(&UART_Lifo);
	if( status== Lifo_Is_Empty)
		printf("Stack is Empty\n");
	else if(status == Lifo_no_error)
		printf("Stack is available\n");

	printf("\n");

	for (i=0;i<6;i++)
	{
		if ( Lifo_Push(&UART_Lifo, i ) ==  Lifo_no_error)
			printf(" UART LIFO pushed :%d\n",i);
	}
	printf("\n");

	status = Lifo_Emptyy(&UART_Lifo);
	if( status== Lifo_Is_Empty)
		printf("Stack is Empty\n");
	else if(status == Lifo_no_error)
		printf("Stack is available\n");

	printf("\n");

	if( Lifo_Top(&UART_Lifo,&value) == Lifo_no_error )
		printf("The top value is = %d \n\n",value);


	for (i=0;i<6;i++)
	{
		if ( Lifo_Pop(&UART_Lifo, &temp ) ==  Lifo_no_error)
			printf(" UART LIFO poped :%d\n",temp);
	}
}
