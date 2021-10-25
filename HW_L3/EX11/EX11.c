/*
 * EX11.c
 *  description : check if the number is positive or not
 *  Created on: Oct 25, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	if (n>0)
	{
		printf(" the number is positive");
	}
	else if (n<0)
	{
		printf(" the number is negative");
	}
	else
	{
		printf(" the number is 0");
	}

}
