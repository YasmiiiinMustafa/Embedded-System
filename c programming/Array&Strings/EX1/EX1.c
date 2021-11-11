/*
 * EX1.c
 * description : find sum of 2 matrix 2*2
 *  Created on: Oct 31, 2021
 *      Author: yasmine mostafa
 */


#include"stdio.h"

int main()
{
	int a[3][5];
    int b[3][5];
    int z[3][5];



	int r,c;
	for(r= 0; r< 3 ;r++)
	{
		for(c= 0; c< 5 ;c++)
		{
			printf(" enter the first matrix(%d,%d)\n",r,c);
			fflush(stdout); fflush(stdin);
			scanf("%d",&a[r][c]);
		}
	}
	for(r= 0; r< 3 ;r++)
	{
		for(c= 0; c< 5 ;c++)
		{
			printf(" enter the second matrix(%d,%d)\n",r,c);
			fflush(stdout); fflush(stdin);
			scanf("%d",&b[r][c]);
		}
	}

	for(r= 0; r < 3 ;r++)
		{
			for(c= 0; c < 5 ;c++)
			{
				z[r][c]=a[r][c]+b[r][c];
			}
		}

	for(r=0;r<3;r++)
	  {
		for(c=0;c<5;c++)
		{
			printf(" %d  ",z[r][c]);

			 if (c == 5 - 1)  /* to make space between two rows*/
			{
			printf("\n\n");
			}

		}
	  }

}



