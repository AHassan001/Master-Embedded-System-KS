/*
 * Q7.c
 *
 *  Created on: Oct 13, 2023
 *      Author: Abdelrahman Maher
 */


/*
 *
 * C function to sum number from 1 to 100 without loop
 *
 */


#include "stdio.h"

int Sum_of_numbers (int numb);

void main ()
{
	int number,sum;

	printf("Please enter the number to its sum from 1 to: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);

	sum = Sum_of_numbers(number);
	printf("Sum from 1 to %d is %d",number,sum);
}

int Sum_of_numbers (int numb)
{
	if(numb>0)
		return numb + Sum_of_numbers (numb -1);
}
