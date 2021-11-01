/*
 * EX3.c
 *  find transpose of a matrix
 *  Created on: Oct 31, 2021
 *      Author: yasmine mostafa
 */


#include<stdio.h>

int main()
{
	int i, j ;
	int a[2][2];
	int b[2][2];


	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter the matrix(%d,%d)\n",i,j);
			fflush(stdout); fflush(stdin);
			scanf("%d",&a[i][j]);
		}
	}


	printf(" the matrix is\n\r");

	for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf(" %d ",a[i][j]);
			}
			printf("\r\n");
		}




	printf(" the transpose matrix is\r\n");
	for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				b[i][j]=a[j][i];
			}
		}
	for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					printf(" %d ",b[i][j]);
				}
				printf("\r\n");

			}
return 0;
}
