/*
 * EX7.c
 * find the length of string without library
 *  Created on: Nov 1, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>
int main ()
{
	char a[20]={"Yasmin Mostafa"};
	int i=0;

	while (a[i]!='\0')
	{
	i++;
	}
	printf("length=%d\n",i);

}
