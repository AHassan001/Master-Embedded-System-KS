 /*
 *
 * Author: Abdelrahman Maher
 *
 */
 
 /*
 *
 * EX3) Add 2 complex numb by passing a structure to a function
 *
 */
 
 #include "stdio.h"

 struct Complex
 {
	 float real;
	 float img;
 }cmp1,cmp2;

  void addcomplex(struct Complex C1, struct Complex C2)
  {
	struct Complex total;
	
	total.real = cmp1.real + cmp2.real;
	total.img = cmp1.img + cmp2.img;	
	
	printf("Sum= %.1f+%.1fi\n",total.real,total.img);

  }

 void main ()
 {
	printf("For 1st complex number\n");

	printf("Enter real and imaginary respectively: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&cmp1.real,&cmp1.img);

	printf("\nFor 2nd complex number\n");

	printf("Enter real and imaginary respectively: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&cmp2.real,&cmp2.img);

	addcomplex(cmp1,cmp2);
 }