/*
 * Ex4.c
 *
 *  Created on: Dec 23, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>

int main()
{
	int arr[10];
	int i;
	int n=5;
	int *p=arr;
	printf("the elements of array");
	fflush(stdout);

	for(i=0;i<n;i++)
	{
	scanf("%d",p);
	p++;
	}
    p=&arr[n-1];
	for(i=n;i>0;i--)
	{
		printf("element[%d]=%d\n",i,*p);
		p--;
	}
	return 0;
}
