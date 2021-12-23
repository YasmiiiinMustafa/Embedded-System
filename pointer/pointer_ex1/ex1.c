/*
 * ex1.c
 *
 *  Created on: Dec 15, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>

int main()
{
	int m=29;
	printf("Address of m=%x\nvalue of m=%d\n",&m,m);

	int *ab=&m;
	printf("Address of ab=%x\nvalue of ab=%d\n",ab,*ab);

	m=34;
	printf("Address of ab=%x\nvalue of ab=%d\n",ab,*ab);

	*ab=7;
	printf("Address of m=%x\nvalue of m=%d\n",&m,m);


	return 0;
}
