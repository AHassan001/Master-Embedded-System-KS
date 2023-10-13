/*
 * Exam_One.c
 *
 *  Created on: Oct 12, 2023
 *      Author: Abdelrahman Maher
 */


/*
 *
 * Q1) take a number and sum all digits
 *
 */


#include "stdio.h"

void reverse_no (int numb);


void main()
{
	int number;

	printf("Please enter the number to sum all its digits: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);

	reverse_no ( number);

}

void reverse_no (int numb)
{
	int rem, sum=0;

	while(numb !=0 )
	{
		rem = numb % 10;
		numb /= 10;
		sum += rem;
	}
	printf("output: %d",sum);
}


