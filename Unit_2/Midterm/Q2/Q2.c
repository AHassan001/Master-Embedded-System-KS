/*
 * Q2.c
 *
 *  Created on: Oct 12, 2023
 *      Author: Abdelrahman Maher
 */

/*
 *
 * Q2) C function to take an integer and calculate it's square root
 *
 */

#include "stdio.h"
#include "math.h"

void sqaure_root(int numb);

void main()
{
	int number;

	printf("Please enter number to get its square root: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);

	sqaure_root (number);
}

void sqaure_root (int number)
{
	float square_root_num =0.0;

	square_root_num = sqrt (number);

	printf("%.3f",square_root_num);

}
