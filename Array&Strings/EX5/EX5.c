/*
 * EX5.c
 *  search an element in array
 *  Created on: Nov 1, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>

int main()
{
	int N;
	printf("enter the N of elements: \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&N);

	int a[N];
	int i;
	int element;

	for(i=0;i<N;i++)
	{
		printf("enter the elements of array (%d)",i);
		fflush(stdin); fflush(stdout);
		scanf("%d",&a[i]);
	}
	printf("enter the element");
	fflush(stdin); fflush(stdout);
	scanf("%d",&element);


	for(i=0;i<N;i++)
	{
		if(element==a[i])
		{
			printf("the location of element is %d",i);
		}
	}

return 0;
}
