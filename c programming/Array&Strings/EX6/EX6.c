/*
 * EX6.c
 * find the frequency of character
 *  Created on: Nov 1, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>

int main()
{
	char a[20];
	char character;
	int freq=0;
	int i;

	printf("the srting is\n");
	fflush(stdin);  fflush(stdout);
	gets(a);

	printf("enter the character is \n");
	fflush(stdin);  fflush(stdout);
	scanf("%c",&character);

	for(i=0;a[i]!='\0';i++)
	{
		if(character==a[i])
			freq++;


	}
	printf("the freq of %c is %d",character,freq);

return 0;
}
