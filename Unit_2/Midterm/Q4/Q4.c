/*
 * Q4.c
 *
 *  Created on: Oct 12, 2023
 *      Author: Abdelrahman Maher
 */

/*
 *
 * C function to reverse digits in number
 *
 */

#include "stdio.h"

int reverse_digits (int numb);


void main ()
{
	int number, new_number;

	printf("Please enter the number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);

	new_number = reverse_digits ( number);

	printf("the number was: %d\n",number);
	printf("the number became: %d",new_number);

}

int reverse_digits (int numb)
{
	int rem,new_numb=0;

	while( numb != 0)
	{
		rem = numb % 10;
		new_numb = new_numb * 10 + rem;
		numb /= 10;
	}
	return new_numb;
}
