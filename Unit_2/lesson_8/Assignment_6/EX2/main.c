 /*
 *
 * Author: Abdelrahman Maher
 *
 */
 
/*
* ex2) printing alphabets by using ptr
*/

#include <stdio.h>

void main()
{
	char alp[27];
	char *ptr = alp;
	int i=0;
	
	for (i=0;i<26;i++)
	{
		*(ptr+i) = 'A'+i;
	}
	
	ptr = alp;
	
	for (i=0;i<26;i++)
	{
		printf("%c  ",*(ptr+i)); 
	}
}