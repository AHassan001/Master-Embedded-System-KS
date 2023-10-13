/*
 * Q5.c
 *
 *  Created on: Oct 12, 2023
 *      Author: Abdelrahman Maher
 */

/*
 *
 * C function to count no of ones in binary number
 *
 */

#include "stdio.h"

int no_of_ones_in_binary (int numb);


void main ()
{
	int number, number_of_ones;

	printf("Please enter the number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);

	number_of_ones = no_of_ones_in_binary(number);
	printf("no of ones found in %d is %d",number,number_of_ones);
}

int no_of_ones_in_binary (int numb)
{
	int i,check,ones_counter=0;

	for(i=0;i<31;i++)
	{
		check = (numb >>i)&1;
		if(check == 1)
			ones_counter++;
	}
	return ones_counter;
}
