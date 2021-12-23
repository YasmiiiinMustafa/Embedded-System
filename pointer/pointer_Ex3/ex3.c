/*
 * ex3.c
 *
 *  Created on: Dec 22, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>
#include<string.h>

int main()
{
char str[20];
char *p=str;
int len;
int i;

printf("enter your string\n");
fflush(stdout);
scanf("%s",str);
len=strlen(p);

for(i=len;i>=0;i--)
{
	printf("%c",*(p+i));
}
return 0;
}
