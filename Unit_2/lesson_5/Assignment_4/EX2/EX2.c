/*
 * EX2.c
 *
 *  Created on: Oct 5, 2023
 *      Author: Abdelrahman Maher
 */

/*
 *
 * C program to calculate factorial using recursion
 *
 */
#include "stdio.h"

int Factorial_calculate (int number);

void main()
{
	int fact=1, no=0;

	printf("Enter a positive integer: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&no);

	fact = Factorial_calculate (no);

	printf("Factorial of %d = %d\n",no,fact);

}

int Factorial_calculate (int number)
{
	if( number >1)
	{
		return (number * Factorial_calculate(number-1));
	}

}
