 /*
 *
 * Author: Abdelrahman Maher
 *
 */
 
 /*
 *
 * EX2) Add 2 distances in (inch-feet) system using structures
 *
 */
 
 #include "stdio.h" 

 struct distance
 {
	 float feet;
	 float inch;
 }d1,d2,sum;
 
 struct distance sum_of_distances( struct distance d1, struct distance d2)
 {
	 
	 sum.feet = d1.feet + d2.feet ;
	 sum.inch = d1.inch + d2.inch ;
	 if(sum.inch>12)
	 {
		 sum.inch-=12;
		 sum.feet++;
	 }
	 return sum;
 }

 void main ()
 {
	printf("Enter information for 1st distance\n");
	printf("Enter feet: ");
	scanf("%f",&d1.feet);

	printf("Enter inch: ");
	scanf("%f",&d1.inch);

	
	printf("\nEnter information for 2nd distance\n");
	printf("Enter feet: ");
	scanf("%f",&d2.feet);

	printf("Enter inch: ");
	scanf("%f",&d2.inch);
	
	sum = sum_of_distances(d1, d2);

	printf("\nSum of distances= %.0f\'-%.1f\"",sum.feet,sum.inch);

 }