/*
 * EX7.c
 *
 *  Created on: Oct 24, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	printf("x=%d y=%d\n",x,y);

	x=x^y;
	y=x^y;
	x=x^y;
	printf("x=%d y=%d",x,y);

	return 0;


}
