/*
 * Ex2.c
 *
 *  Created on: Dec 22, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>

int main()
{
	char c;
	char *p=&c;

	for(c='A';c<='Z';c++)
	{
		printf("%c ",*p);
	}
	return 0;
}

 // other solution
/*
#include<stdio.h>

int main()
{
	char c[27];
	int x;
	char *p=c;

	for(x=0;x<26;x++)
	{
		*p=x+'A';
		p++;
	}
    p=c;
	printf("print all the alphabet\n");
	fflush(stdout);

	for(x=0;x<26;x++){
		printf("%c ",*p);
		p++;
	}
	return 0;
}
*/
