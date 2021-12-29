/*
 * EX8.c
 *  description : progpram to check whether a number is even or odd
 *  Created on: Oct 24, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>
int main()
{
	int x ;
	scanf("%d",&x);
	if(x % 2 ==0 )
	{
		printf("the number is even");
	}
	else
	{
		printf("the number is odd");
	}

	return 0;
}
