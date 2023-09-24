/*
 * EX1.c
 *
 *  Created on: Sep 21, 2023
 *      Author: Abdelrahman Maher
 */

/*
 *
 * Ex1) c code to find sum of 2 matrix of order
 *      2*2 using Multidimensional arrays and the
 *      elements are entered by the user.
 *
 * */
#include "stdio.h"

void main()
{
	float mat_one[2][2] = {0};
	float mat_two[2][2] = {{0,0},{0,0} };
	float sum    [2][2];

	char i=0, j=0;

	printf("Enter the elements of 1st matrix \n");
	for(i=0 ; i<2 ;i++)
	{
		for(j=0 ; j<2 ;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin);	fflush(stdout);
			scanf("%f",&mat_one[i][j]);
		}
	}

	printf("Enter the elements of 2nd matrix \n");
	for(i=0 ; i<2 ;i++)
		{
			for(j=0 ; j<2 ;j++)
			{
				printf("Enter b%d%d: ",i+1,j+1);
				fflush(stdin);	fflush(stdout);
				scanf("%f",&mat_two[i][j]);
			}
		}

	printf("\nSum of Matrix: \n");
	for(i=0 ; i<2 ;i++)
		{

			for(j=0 ; j<2 ;j++)
			{
				sum[i][j] = mat_one[i][j] + mat_two[i][j];
				printf("%.1f \t",sum[i][j]);
			}
			printf("\n");

		}


}
