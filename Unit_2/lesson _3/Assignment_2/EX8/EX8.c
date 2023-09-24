/*
 * EX8.c
 *
 *  Created on: Sep 15, 2023
 *      Author: Abdelrahman Maher
 */


/*
 *
 * Ex8) simple calculator to add subtract, mut or divide using switch
 *
 * */
#include "stdio.h"

void main()
{
	float x = 0;
	float y = 0;

	char ch = 0;

	printf("Enter operator either + or - or * or / : ");
	fflush(stdin);	fflush(stdout);
	scanf("%c",&ch);

	printf("Enter two operands: ");
	fflush(stdin);	fflush(stdout);
	scanf("%f %f",&x, &y);

	switch (ch)
	{
		case '+':
			printf("%.1f %c %.1f = %.1f",x,ch,y,x+y);
			break;
		case '-':
			printf("%.1f %c %.1f = %.1f",x,ch,y,x-y);
			break;
		case '*':
			printf("%.1f %c %.1f = %.1f",x,ch,y,x*y);
			break;
		case '/':
			printf("%.1f %c %.1f = %.1f",x,ch,y,x/y);
			break;
	}

}
