/*
 * EX15.c
 *  description: find the factroial number
 *  Created on: Oct 25, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>

int main()
{
	int i,n,fact=1;
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("fact=%d",fact);


}
