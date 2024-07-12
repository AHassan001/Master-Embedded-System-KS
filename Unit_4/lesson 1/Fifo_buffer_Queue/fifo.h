/*
 * fifo.h
 *
 *  Created on: Dec 29, 2023
 *      Author: Abdelrahman Maher
 */

#ifndef FIFO_H_
#define FIFO_H_

#include "platform_type.h"
#include "stdio.h"

#define DataType	uint16_t
#define Size 5

DataType Buff[Size];

typedef struct {
	DataType* Base;
	DataType* Tail;
	DataType* Head;
	uint16_t  length;
	uint16_t  count;
}Fifo_buffer_t;

typedef enum{
	fifo_no_error,
	fifo_empty,
	fifo_null,
	fifo_full
}Fifo_Status_t;

//APIs

Fifo_Status_t Fifo_Init (Fifo_buffer_t* fifo_buffer, DataType* buff,uint16_t Length);
Fifo_Status_t Fifo_EnQueue (Fifo_buffer_t* fifo_buffer, DataType item);
Fifo_Status_t Fifo_DeQueue (Fifo_buffer_t* fifo_buffer,DataType* item);
Fifo_Status_t Fifo_Is_Full (Fifo_buffer_t* fifo_buffer);
Fifo_Status_t Fifo_Is_Empty (Fifo_buffer_t* fifo_buffer);
Fifo_Status_t Fifo_Top (Fifo_buffer_t* fifo_buffer,DataType* value );
Fifo_Status_t Fifo_Size (Fifo_buffer_t* fifo_buffer,uint16_t* value);
void Fifo_Print(Fifo_buffer_t* fifo_buffer);


#endif /* FIFO_H_ */
