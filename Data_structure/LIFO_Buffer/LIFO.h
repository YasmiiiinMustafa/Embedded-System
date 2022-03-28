/*
 * LIFO.h

 *
 *  Created on: Feb 26, 2022
 *      Author: yasmine mostafa
 */

#ifndef LIFO_H_
#define LIFO_H_

typedef struct {
	unsigned int length;
	unsigned int count;
	unsigned int* base;
	unsigned int* head;

}LIFO_BUF_t;

typedef enum {
	LIFO_no_error,
	LIFO_empty,
	LIFO_full,
	LIFO_null
}LIFO_status;

//APIS

LIFO_status LIFO_init(LIFO_BUF_t*LIFO,unsigned int* BUF,unsigned int length);
LIFO_status LIFO_Add(LIFO_BUF_t*LIFO,unsigned int item);
LIFO_status LIFO_get(LIFO_BUF_t* LIFO,unsigned int*  item );




#endif /* LIFO_H_ */
