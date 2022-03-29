/*
 * LIFO.c

 *
 *  Created on: Feb 26, 2022
 *      Author: yasmine mostafa
 */

#include"LIFO.h"
#include <stddef.h>

LIFO_status LIFO_init(LIFO_BUF_t*LIFO,unsigned int* BUF,unsigned int length)
{
	if(BUF == NULL)
		return LIFO_null;

	LIFO->base=BUF;
	LIFO->head=BUF;
	LIFO->length=length;
	LIFO->count=0;

return LIFO_no_error;
}

LIFO_status LIFO_Add(LIFO_BUF_t*LIFO,unsigned int item)
{
	if(!LIFO->base || !LIFO-> head)
			return LIFO_null;
	if(LIFO->count==LIFO->length)
		return LIFO_full;
	*(LIFO->head)=item;
	LIFO->head++;
	LIFO->count++;

return LIFO_no_error;
}

LIFO_status LIFO_get(LIFO_BUF_t*LIFO,unsigned int* item)
{
	if(!LIFO->base || !LIFO-> head)
				return LIFO_null;
		if(LIFO->count==0)
			return LIFO_empty;

		LIFO->head--;
		*item=*(LIFO->head);
		LIFO->count--;

return LIFO_no_error;
}
