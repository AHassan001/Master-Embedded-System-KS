/*
 * Ex4.c
 *
 *  Created on: Oct 6, 2023
 *      Author: Abdelrahman Maher
 */
/*
 *
 * C Program to calculate power of a number using recursion
 *
 *
 */
#include "stdio.h"
int powerno_function(int base_no, int power_no);


void main()
{
	int x=0,number=0,powerno=0;

	printf("Enter base number: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&number);

	printf("Enter power number(positive integer): ");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&powerno);

	x = powerno_function(number, powerno);
	printf("%d^%d = %d",number,powerno,x);
}

int powerno_function(int base_no, int power_no)
{
	if (power_no > 1)
		return (base_no * powerno_function(base_no, --power_no));
}
