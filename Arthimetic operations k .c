/* All arithmatic operations */
#include<stdio.h>
void main()
{
	int a, b, s, d, m, r;
	float q;
	
	a = 11;
	b = 2;
	
	s = a+b;
	d = a-b;
	m = a*b;
	q = a*1.0/b;
	r = a%b;
	
	printf("Sum        of %d and %d is %d:\n", a, b, s);

	printf("Difference of %d and %d is %d:\n", a, b, d);
	
	printf("Product    of %d and %d is %d:\n", a, b, m);
	
	printf("Quotient   of %d and %d is %f:\n", a, b, q);
	
	printf("Remainder  of %d and %d is %d:", a, b, r);
	
		
}
