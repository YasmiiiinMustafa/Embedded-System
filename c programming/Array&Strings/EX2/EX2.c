/*
 * EX2.c
 * find the average of array
 *  Created on: Oct 31, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>
#define n 4

int main()
{

	int i;
	float a[n];

	for(i=0;i<n;i++)
	{
		printf("enter your data");
		fflush(stdout); fflush(stdin);
		scanf("%f",&a[i]);

	}
	float sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}


	float average = sum /n ;

	printf("average = %f",average);
}
