/*
 * EX5.c
 *   Author: Abdelrahman Maher
 */


/*
 *
 * Ex5) whether the char is alphabet or not
 *
 * */
#include "stdio.h"

void main()
{
	char ch=0;

	printf("Please enter a character: ");
	fflush(stdin);	fflush(stdout);
	scanf("%c",&ch);
	/*
	 * A in ASCII = 65 + 25= 90 which is Z
	 * add 32 to each will get the small letter a = 97
	 * */
	if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122 )
	{
		printf("%c is an alphabet ",ch);
	}
	else
		printf("%c is not an alphabet ",ch);

}
