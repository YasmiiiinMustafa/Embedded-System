/*
 * EX4.c
 * description : insert element in array
 *  Created on: Oct 31, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>

int main()
{

	int a[4];
	int i;
	int element;
	int location;

	for(i=0;i<4;i++)
	{
		printf("enter the element in array (%d)",i);
		scanf(" %d ",&a[i]);
	}

	for(i=0;i<4;i++)
		{
			printf("%d\n",a[i]);

		}

	printf("enter the element\n");
	scanf(" %d ",&element);


	printf("enter the location\n");
	scanf(" %d ",&location);

}
