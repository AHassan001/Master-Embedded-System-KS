/*
 * Q10.c
 *
 *  Created on: Oct 13, 2023
 *      Author: Abdelrahman Maher
 */

/*
 *
 * C function to count the max number of ones between 2 zeros
 *
 */

#include "stdio.h"

int number_of_ones(int number);

void main ()
{
	int number,counts;

	printf("Please enter the number: ");
	fflush(stdin);      fflush(stdout);
	scanf("%d",&number);

	counts = number_of_ones(number);
	printf("The max number of ones between 2 zeros in %d is %d",number,counts);
}

int number_of_ones(int number)
{
	int i,max_counts=0,count=0;

	for(i=0;i<=31;i++)
	{
		if( ((number>>i)& 1) == 0)
		{
			i++;
			if( ((number>>i)&1) == 1)
			{
				i++;
				count = 1;
				while( ((number>>i)&1) == 1)
				{
					count++;
					i++;
				}

				if (count>max_counts)
				{
					max_counts = count;
					count = 0;
				}
			}
			else
				count = 0;
		}
	}
	return max_counts;
}
