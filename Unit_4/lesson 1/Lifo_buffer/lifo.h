/*
 * lifo.h
 *
 *  Created on: Dec 26, 2023
 *      Author: Abdelrahman Maher
 */

#ifndef LIFO_H_
#define LIFO_H_

#include "stdio.h"
#include "platform_type.h"
#include "stdlib.h"

#define DataType	uint16_t

typedef struct{
	uint16_t count;
	DataType* top;
	uint16_t length;
}Lifo_buffer_t;

typedef enum {
	Lifo_no_error,
	Lifo_Is_Full,
	Lifo_NULL,
	Lifo_Is_Empty
}Lifo_status_t;

//APIs

Lifo_status_t Lifo_Push(Lifo_buffer_t* lifo_buffer, DataType item );
Lifo_status_t Lifo_Pop (Lifo_buffer_t* lifo_buffer, DataType* item );
Lifo_status_t Lifo_init(Lifo_buffer_t* lifo_buffer, DataType* buff, uint16_t len);

Lifo_status_t Lifo_Full(Lifo_buffer_t* lifo_buffer);
Lifo_status_t Lifo_Emptyy(Lifo_buffer_t* lifo_buffer);
Lifo_status_t Lifo_Top(Lifo_buffer_t* lifo_buffer,DataType* value);
uint16_t Lifo_Size(Lifo_buffer_t* lifo_buffer);


#endif /* LIFO_H_ */
