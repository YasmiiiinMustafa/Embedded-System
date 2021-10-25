/*
 * EX10.c
 *
 *  description: to find the largest number
 *  Created on: Oct 25, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>
int main()
{
	float n1,n2,n3;
	scanf("%f %f %f",&n1,&n2,&n3);
	printf("the number is %f %f %f\n",n1,n2,n3);

	if(n1>n2 && n1>n3)
	{
		printf("the largest is n1=%f",n1);
	}
	else if (n2>n1 && n2>n3){
		printf("the largest is n2=%f",n2);
	}
	else if (n3>n1 && n3>n2){
			printf("the largest is n3=%f",n3);
		}

	else
	{
		printf("nothing");
	}
}
