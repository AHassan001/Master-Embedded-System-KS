/*
 * EX6.c
 *
 *  Created on: Sep 14, 2023
 *      Author: Abdelrahman Maher
 */

/*
 *
 * Q6) Write Source Code to Swap Two Numbers
 *
 * */
#include "stdio.h"

void main()
{
	float a = 0.0;
	float b = 0.0;
	float temp = 0.0;

	printf("Enter a value of a: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%f", &a );

	printf("Enter a value of b: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%f", &b );

	temp = b;
	b = a;
	a= temp;

	printf("After swapping, value of a = %.2f ",a);
	printf(" \nAfter swapping, value of b = %.1f ",b);


	//printf("ASCII value of %c = %d", x,x);
}
