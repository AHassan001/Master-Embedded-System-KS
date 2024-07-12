/*
 * lifo.c
 *
 *  Created on: Dec 26, 2023
 *      Author: Abdelrahman Maher
 */


#include "lifo.h"


Lifo_status_t Lifo_Push(Lifo_buffer_t* lifo_buffer, DataType item )
{
	// check if their is a stack
	if( !lifo_buffer->top )
		return Lifo_NULL;

	// check if the stack is full
	if( lifo_buffer->length == lifo_buffer->count)
		return Lifo_Is_Full;

	//add the item to the stack
	*(lifo_buffer->top) = item;
	lifo_buffer->top++;
	lifo_buffer->count++;

	//return no error
	return Lifo_no_error;
}

Lifo_status_t Lifo_Pop (Lifo_buffer_t* lifo_buffer, DataType* item )
{
	// check if their is a stack
	if( !lifo_buffer->top )
		return Lifo_NULL;

	// check if it is empty
	if( lifo_buffer->count == 0 )
		return Lifo_Is_Empty;

	//remove the item from the stack
	lifo_buffer->top--;
	*item= *(lifo_buffer->top) ;
	lifo_buffer->count--;

	//return no error
	return Lifo_no_error;
}
Lifo_status_t Lifo_init(Lifo_buffer_t* lifo_buffer, DataType* buff, uint16_t len)
{
	if (buff == NULL)
		return Lifo_NULL;

	lifo_buffer->top = buff;
	lifo_buffer->length = len;
	lifo_buffer->count = 0;

	//return no error
	return Lifo_no_error;
}



Lifo_status_t Lifo_Full(Lifo_buffer_t* lifo_buffer)
{
	if (!lifo_buffer->top)
		return Lifo_NULL;
	if (lifo_buffer->length == lifo_buffer->count)
		return Lifo_Is_Full;

	return Lifo_no_error;
}


Lifo_status_t Lifo_Emptyy(Lifo_buffer_t* lifo_buffer)
{
	if (lifo_buffer->count == 0)
		return Lifo_Is_Empty;

	if (!lifo_buffer->top)
		return Lifo_NULL;

	return Lifo_no_error;
}


Lifo_status_t Lifo_Top(Lifo_buffer_t* lifo_buffer,DataType* value)
{
	if (!lifo_buffer->top)
			return Lifo_NULL;

	*value = *(lifo_buffer->top-1);

	return Lifo_no_error;

}


uint16_t Lifo_Size(Lifo_buffer_t* lifo_buffer)
{
	return (lifo_buffer->count);
}
