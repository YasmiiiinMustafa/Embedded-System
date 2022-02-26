/*
 * main.c

 *
 *  Created on: Feb 26, 2022
 *      Author: yasmine mostafa
 */


#include"stdio.h"
#include"LIFO.h"
#include"stdlib.h"

unsigned int buffer[5];
unsigned int buffer2[5];

int main()
{
	LIFO_BUF_t uart_lifo,I2c_lifo;

	//create each Buffer
	//static allocation

	LIFO_init(&uart_lifo , buffer , 5);

	//dynamic allaocation
	unsigned int* buffer2=(unsigned int *)malloc(5 * sizeof(unsigned int));
	LIFO_init(&I2c_lifo , buffer2 , 5);


	//Add item
	int i;
	for(i=0;i<5;i++)
	{
		if (LIFO_Add(&uart_lifo , i) == LIFO_no_error)
		printf("Uart_LIFO_add : %d \n",i);
	}

	int temp=0;
	for(i=0;i<5;i++)
		{
		if (LIFO_get(&uart_lifo , &temp) == LIFO_no_error)
			printf("\n Uart_LIFO_get : %d \n",temp);
		}

	return 0;
}
