 /*
 *
 * Author: Abdelrahman Maher
 *
 */
 /*
 * Ex3) reverse a string using a pointer
 */
 
#include <stdio.h>
#include "string.h"


void main()
{
	char text[50];
	char *ptr = text;
	int i=0;
	
	printf("Input a string:");
	gets(text);
		
	printf("Reverse of the string is: ");

	for (i=strlen(text)-1;i>=0;i--)
	{
		printf("%c",*(ptr+i)); 
	}
}