/*
 * EX1.c
 *
 *  Created on: Sep 15, 2023
 *      Author: Abdelrahman Maher
 */

/*
 *
 * Ex1) write c program to check whether a numb is even or odd
 *
 * */
#include "stdio.h"

void main()
{
	int x = 0;

	printf("Enter an integer you want to check: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&x);

	if ((x % 2) == 0 )
		printf("%d is even.",x);

	else
		printf("%d is odd.",x);

}
