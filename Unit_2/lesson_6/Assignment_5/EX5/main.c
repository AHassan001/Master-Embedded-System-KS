 /*
 *
 * Author: Abdelrahman Maher
 *
 */
 
 /*
 *
 * EX5) find area of a circle passing argument to macros
 *
 */
 
 #include "stdio.h"
 
 #define pi 3.14159265359
 #define area pi*r*r

 void main ()
 {
	int r;
	
	printf("Enter the radius: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&r);
	
	printf("Area= %.2f \n",area);

 }