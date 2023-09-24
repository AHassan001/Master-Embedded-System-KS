/*
 * String_EX3.c
 *
 *  Created on: Sep 24, 2023
 *      Author: Abdelrahman Maher
 */
/*
 *
 * Reverse the string.
 *
 * */
#include "stdio.h"
#include "stdlib.h"

void main()
{
	char i=0, j=0, input[20], reversed_input[20];

	printf("Enter the string : ");
	fflush(stdin); fflush(stdout);
	scanf("%s", input);
/*
	j = strlen(input)-1;

	while(input[i] != 0)
	{
		reversed_input[j]= input[i];
		i++;
		j--;
	}
*/
	for(i=0, j= strlen(input)-1; input[i] != 0; i++,j--)
	{
		reversed_input[j]= input[i];
	}
	reversed_input[i] = 0;

	printf("Reverse string is: %s",reversed_input);
}
