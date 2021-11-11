/*
 * EX8.c
 *
 *  reverse string without library
 *  Created on: Nov 1, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>
#include<string.h>

int main()
{
	char a[20]="yasmin";
    char b[20];
	int length =strlen(a);
	int i;

	for(i=0;b[i]!='\0';i++, length--)
	{

		b[i]= a[length-1];

	}

	b[i]='\0';
	printf("%s",b);

return 0;
}
