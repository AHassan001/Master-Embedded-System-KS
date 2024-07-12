/*
 * fifo.c
 *
 *  Created on: Dec 29, 2023
 *      Author: Abdelrahman Maher
 */

#include "fifo.h"


Fifo_Status_t Fifo_Init (Fifo_buffer_t* fifo_buffer, DataType* buff,uint16_t Length)
{
	// the value send is available (not equal to NULL)
	if( buff == NULL )
		return fifo_null;

	fifo_buffer->Base    = buff;
	fifo_buffer->Head    = buff;
	fifo_buffer->Tail    = buff;
	fifo_buffer->count   = 0;
	fifo_buffer->length  = Length;

	// return no error
	return fifo_no_error;
}


Fifo_Status_t Fifo_EnQueue (Fifo_buffer_t* fifo_buffer, DataType item)
{
	//check if there is a Queue or FIFO is buffer created
	if ( (fifo_buffer->Base == NULL) || (fifo_buffer->Head == NULL) || (fifo_buffer->Tail == NULL) )
		return fifo_null ;

	//check if it is full
	if (  Fifo_Is_Full(fifo_buffer) == fifo_full )
		return fifo_full;

	// add to the queue
	*(fifo_buffer->Head) = item;
	fifo_buffer->count++;
	fifo_buffer->Head++;

	if (fifo_buffer->Head == (DataType*)(fifo_buffer->Base + (fifo_buffer->length * sizeof(DataType))))
		fifo_buffer->Head = fifo_buffer->Base;

	// return no error
	return fifo_no_error;
}


Fifo_Status_t Fifo_DeQueue (Fifo_buffer_t* fifo_buffer, DataType* item)
{
	//check if there is a Queue or FIFO is buffer created
	if ( (fifo_buffer->Base == NULL) || (fifo_buffer->Head == NULL) || (fifo_buffer->Tail == NULL) )
		return fifo_null ;

	//check if it is empty
	if (  Fifo_Is_Empty(fifo_buffer) == fifo_empty )
		return fifo_empty;

	// remove from the queue
	*item = *(fifo_buffer->Tail);

	fifo_buffer->count--;

	if (fifo_buffer->Tail == (DataType*)(fifo_buffer->Base + (fifo_buffer->length * sizeof(DataType))))
		fifo_buffer->Tail = fifo_buffer->Base;
	else
		fifo_buffer->Tail++;

	// return no error
	return fifo_no_error;
}


Fifo_Status_t Fifo_Is_Full (Fifo_buffer_t* fifo_buffer)
{
	//check if there is a Queue or FIFO is buffer created
	if ( (fifo_buffer->Base == NULL) || (fifo_buffer->Head == NULL) || (fifo_buffer->Tail == NULL) )
		return fifo_null ;

	if (fifo_buffer->count == fifo_buffer->length)
		return fifo_full;

	return fifo_no_error;
}


Fifo_Status_t Fifo_Is_Empty (Fifo_buffer_t* fifo_buffer)
{
	//check if there is a Queue or FIFO is buffer created
	if ( (fifo_buffer->Base == NULL) || (fifo_buffer->Head == NULL) || (fifo_buffer->Tail == NULL) )
		return fifo_null ;

	if (fifo_buffer->count == 0)
		return fifo_empty;

	return fifo_no_error;
}


Fifo_Status_t Fifo_Top (Fifo_buffer_t* fifo_buffer, DataType* value )
{
	if ( (fifo_buffer->Base == NULL) || (fifo_buffer->Head == NULL) || (fifo_buffer->Tail == NULL) )
		return fifo_null ;

	*value = *(fifo_buffer->Tail);

	return fifo_no_error;

}


Fifo_Status_t Fifo_Size (Fifo_buffer_t* fifo_buffer, uint16_t* value)
{
	if ( (fifo_buffer->Base == NULL) || (fifo_buffer->Head == NULL) || (fifo_buffer->Tail == NULL) )
		return fifo_null ;

	*value = fifo_buffer->count;

	return fifo_no_error;
}


void Fifo_Print(Fifo_buffer_t* fifo_buffer)
{
	DataType* Temp;
	uint16_t i;

	if(fifo_buffer->count == 0)
		printf("The Queue is empty\n");
	else
	{
		Temp = fifo_buffer->Tail;
		printf("---Print the values in the Queue---\n");

		for(i=0 ;i< fifo_buffer-> count; i++)
		{
			printf("\t---%X---\n",*Temp);
			Temp++;
		}
	}
	printf("--------------------------------");

}

