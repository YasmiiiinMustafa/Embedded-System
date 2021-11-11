/*
 * EX9.c
 *  description : to check vowel or consonant
 *  Created on: Oct 24, 2021
 *      Author: yasmine mostafa
 */

#include<stdio.h>

int main()
{
	char c ;
	scanf(" %c",&c);
	printf(" enter the alphabet is : %c",c);


	if(c == 'a' || c== 'o' || c== 'i' || c==' u' || c=='e' ){
		printf("the alphabet is vowel\n");
	}

	else if(c == 'A' || c== 'O' || c== 'I' || c==' U' || c=='E' ){
		printf("\nthe alphabet is vowel\n");
	}

	else
	{
		printf("\nthe alphabet is consonant");
	}

}
