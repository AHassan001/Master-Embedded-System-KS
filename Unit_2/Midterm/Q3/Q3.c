/*
 * Q3.c
 *
 *  Created on: Oct 12, 2023
 *      Author: Abdelrahman Maher
 */

#include "stdio.h"

int prime_numbers (int numb);

void main()
{
	int no1,no2,i,value;

	printf("Please enter interval (2 numbers): ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&no1,&no2);

	for(i=no1; i<=no2; i++)
	{
		// because 1 is not a prime number
		if (i == 1)
			i++;

		value = prime_numbers (i);
		if (value != 0)
			printf("%d ",i);
	}
}

int prime_numbers (int numb)
{
	int i, flag=0;

	for(i=2;i<=(numb/2); i++)
	{
		if( numb%i == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		return i;
	else
		return 0;

}
