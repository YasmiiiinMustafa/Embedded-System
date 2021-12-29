/*
 * EX12.c
 *  description : check if the character is alphabet or not
 *  Created on: Oct 25, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>

int main()
{
	char ch;
	scanf("%c",&ch);

	if ((ch>='a' && ch <='z') || (ch >= 'A' && ch <='Z'))
	{
		printf("the character is alphabet");
	}
	else
	{
		printf(" the character is not alphabet");
	}
}
