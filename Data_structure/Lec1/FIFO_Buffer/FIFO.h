/*
 * FIFO.h

 *
 *  Created on: Feb 26, 2022
 *      Author: yasmine mostafa
 */

#ifndef FIFO_H_
#define FIFO_H_

#include"stdio.h"
#include"stdint.h"

#define element_type uint8_t

typedef struct
{
	unsigned int length;
	unsigned int count;
	unsigned int* base;
	unsigned int* head;
	unsigned int* tail;
}FIFO_BUF_t;

typedef enum
{
	FIFO_no_error,
	FIFO_full,
	FIFO_empty,
	FIFO_null
}FIFO_status;

//APIS

FIFO_status FIFO_init(FIFO_BUF_t* FIFO , unsigned int* BUF, unsigned int length);
FIFO_status FIFO_enqueue(FIFO_BUF_t* FIFO , unsigned int item);
FIFO_status FIFO_dequeue(FIFO_BUF_t* FIFO , unsigned int* item);
void FIFO_print(FIFO_BUF_t* FIFO);
FIFO_status FIFO_is_full(FIFO_BUF_t* FIFO);






#endif /* FIFO_H_ */
