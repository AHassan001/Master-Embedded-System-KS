/*
 * main.c
 *
 *  Created on: Dec 29, 2023
 *      Author: Abdelrahman Maher
 */

#include "fifo.h"

void main()
{
	Fifo_buffer_t Uart_Buffer;
	Fifo_Status_t status;
	DataType i,value;

	if ( Fifo_Init(&Uart_Buffer, Buff, Size) == fifo_null )
		printf("the Queue does not exist");

	status = Fifo_Is_Empty(&Uart_Buffer);
	if( status== fifo_empty)
		printf("Queue is Empty\n");
	else if(status == fifo_no_error)
		printf("Queue is available\n");

	printf("\n");

	for (i=0;i<6;i++)
	{
		if ( Fifo_EnQueue(&Uart_Buffer, i ) ==  fifo_no_error)
			printf(" UART FIFO Queue :%d\n",i);
	}
	printf("\n");

	Fifo_DeQueue(&Uart_Buffer,&value);
	printf("Dequeue: ----%X----\n\n",value);

	status = Fifo_Is_Empty(&Uart_Buffer);
	if( status== fifo_empty)
		printf("Queue is Empty\n");
	else if(status == fifo_no_error)
		printf("Queue is available\n");

	printf("\n");

	if( Fifo_Top(&Uart_Buffer,&value) == fifo_no_error )
		printf("The top value is = %d \n\n",value);

	Fifo_Print(&Uart_Buffer);

}
