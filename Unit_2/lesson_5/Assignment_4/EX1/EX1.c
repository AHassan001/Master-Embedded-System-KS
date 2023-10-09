/*
 * EX1.c
 *
 *  Created on: oct 4, 2023
 *      Author: Abdelrahman Maher
 */


/*
 *
 * Prime Numbers Between 2 intervels
 * */


#include "stdio.h"

int Prime_no(int i);

void main()
{
	int no1=0, no2=0;
	int k,numb;

	printf("Enter two numbers(intervals): ");
	fflush(stdin);	 fflush(stdout);
	scanf("%d %d",&no1, &no2);

	printf("Prime numbers between %d and %d are: ",no1, no2);

	for(k =no1+1; k<=no2; k++)
	{
		numb = Prime_no (k);

		if (numb != 0)
			printf("%d ",numb);
	}
}

int Prime_no(int number)
{
	int i=0, flag =0;

	for(i=2; i < number/2; i++)
	{
		if( number % i == 0)
		{
			flag =1;
			break;
		}
	}
	if (flag == 0)
		return number;
}
