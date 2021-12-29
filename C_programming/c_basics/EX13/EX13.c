/*
 * EX13.c
 *  description: to calculate sum of natural numbers
 *  Created on: Oct 25, 2021
 *      Author: yasmine mostafa
 */

#include<stdio.h>

int main()
{
	int i,j,sum=0;
	scanf("%d",&j);

	for(i=0;i<j;i++)
	{
		sum+=i;
	}

	printf("sum=%d",sum);
}
