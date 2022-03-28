/*
 * main.c

 *
 *  Created on: Feb 26, 2022
 *      Author: yasmine mostafa
 */



#include"stdio.h"
#include"FIFO.h"
#include"stdlib.h"

unsigned int buffer[5];

int main()
{
	FIFO_BUF_t uart_FIFO;
	element_type i , temp;

	//create each Buffer

	if(FIFO_init(&uart_FIFO , buffer , 5)==FIFO_no_error)
	{
		printf("FIFO is DONE \n");
	}

	for(i=0;i<7;i++)
	{
		printf("FIFO_enqueue : %x \n",i);
		if  (FIFO_enqueue(&uart_FIFO , i) == FIFO_no_error)
			printf("FIFO_enqueue Done\n");
		else
			printf("FIFO_enqueue failed\n ");
	}

	FIFO_print(&uart_FIFO);
	if  (FIFO_dequeue(&uart_FIFO , &temp) == FIFO_no_error)
		printf("FIFO_dequeue %x \n",temp);
	if  (FIFO_dequeue(&uart_FIFO , &temp) == FIFO_no_error)
		printf("FIFO_dequeue %x \n",temp);
	FIFO_print(&uart_FIFO);

	return 0;
}
