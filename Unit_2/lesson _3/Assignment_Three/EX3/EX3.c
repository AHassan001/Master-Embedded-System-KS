
/*
 * EX3.c
 *
 *  Created on: Sep 23, 2023
 *      Author: Abdelrahman Maher
 */


/*
 * Find the transpose of a matrix
 *
 */

#include "stdio.h"

void main ()
{
	int i = 0, j = 0, row = 0, column = 0;
	int matrix[20][20];
	int trans_matrix[20][20];

	printf("Enter rows and column of matrix: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d %d",&row,&column);

	printf("Enter elements of matrix:\n");

	for(i=0; i < row; i++)
	{
		for(j=0; j < column; j++)
		{
			printf("Enter elements a%d%d: ",i+1,j+1);
			fflush(stdin);   fflush(stdout);
			scanf("%d",&matrix[i][j]);
		}
	}

	printf("\nEntered matrix:\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}

	for(i=0; i<column; i++)
	{
		for(j=0; j<row; j++)
		{
			trans_matrix [i][j] = matrix[j][i];
		}
	}

	printf("\nTranspose of matrix:\n");
	for(i=0; i<column; i++)
	{
		for(j=0; j<row; j++)
		{
			printf("%d ",trans_matrix[i][j]);
		}
		printf("\n");
	}
}
