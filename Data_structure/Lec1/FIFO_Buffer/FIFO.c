/*
 * FIFO.c

 *
 *  Created on: Feb 26, 2022
 *      Author: yasmine mostafa
 */

#include"FIFO.h"

FIFO_status FIFO_init(FIFO_BUF_t* FIFO , unsigned int* BUF, unsigned int length)
{
	if(BUF==NULL)
		return FIFO_null;

	FIFO->base=BUF;
	FIFO->tail=BUF;
	FIFO->head=BUF;
	FIFO->count=0;
	FIFO->length=length;

	return FIFO_no_error;
}
FIFO_status FIFO_enqueue(FIFO_BUF_t* FIFO , unsigned int item)
{
	if(!FIFO->head||!FIFO->base||!FIFO->tail)
		return FIFO_null;

	if(FIFO->count == FIFO->length)
		return FIFO_full;

	*(FIFO->head)=item;
	FIFO->count ++;

	if(FIFO->head == (FIFO->base + (FIFO->length * sizeof(element_type))))
		FIFO->head = FIFO->base;
	else
		FIFO->head ++;

	return FIFO_no_error;
}
FIFO_status FIFO_dequeue(FIFO_BUF_t* FIFO , unsigned int* item)
{
	if(!FIFO->head||!FIFO->base||!FIFO->tail)
		return FIFO_null;

	if(FIFO->count == 0)
		return FIFO_empty;

	*item = *(FIFO->tail);
	FIFO->count --;

	if(FIFO->tail == (FIFO->base + (FIFO->length * sizeof(element_type))))
			FIFO->tail = FIFO->base;
	else
		FIFO->tail++;

	return FIFO_no_error;
}

void FIFO_print(FIFO_BUF_t* FIFO)
{
	element_type *temp;
	int i;

	if(FIFO->count==0)
		printf("FIFO is empty");
	else
		{
		  temp = FIFO->tail;
	      for(i=0; i<FIFO->count ;i++)
	      {
	    	  printf("%x",*temp);
	          temp++;
		 }
		}

}
FIFO_status FIFO_is_full(FIFO_BUF_t* FIFO)
{
	if(!FIFO->head||!FIFO->base||!FIFO->tail)
			return FIFO_null;

		if(FIFO->count == FIFO->length)
			return FIFO_full;

	return FIFO_no_error;
}
