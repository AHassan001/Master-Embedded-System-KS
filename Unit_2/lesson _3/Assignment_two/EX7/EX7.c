/*
 *  Ex7.c
 *
 *  Created on: Sep 15, 2023
 *      Author: Abdelrahman Maher
 */

/*
 *
 * Ex7) program to find factorial of a number
 *
 * */
#include "stdio.h"

void main()
{
	int i, x = 0;
	int factorial = 1;

	printf("Enter an integer: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&x);
	if (x<0)
	{
		printf("Error!!! Factorial of negative number dosen't exist.");
	}
	else if(x>0)
	{
		for(i=1;i<=x;i++)
		{
			factorial *= i;
		}
		printf("Factorial = %d", factorial);
	}
	else
		printf("Factorial = 1");

}
