/*
 * EX6.c
 *
 *  Created on: Oct 24, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>
int main()
{
	float x,y;
	float temp=0;

	scanf("%f %f",&x,&y);
	printf("x= %f\ny=%f\n",x,y);

	temp=x;
	x=y;
	y=temp;

	printf("x=%f\ny=%f",x,y);
	return 0;
}
