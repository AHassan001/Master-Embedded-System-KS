/*
 * EX4.c
 *   Author: Abdelrahman Maher
 */


/*
 *
 * Ex4) whether the number postive or negative
 *
 * */

#include "stdio.h"

void main()
{
	float x = 0.0;

	printf("Enter a number: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f",&x);

	if(x > 0)
	{
		printf("%.2f is postive.",x);
	}

	else if (x < 0)
	{
		printf("%.2f is negative.",x);
	}
	else
	{
		printf("You entered zero.",x);
	}
}
