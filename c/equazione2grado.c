#include <stdio.h>
#include <math.h>

void main()
{
	int a,b,c;
	float x1,x2,delta;
	
	printf("Inserire a: ");
	scanf("%d", &a);
	printf("Inserire b: ");
	scanf("%d", &b);
	printf("Inserire c: ");
	scanf("%d", &c);
	
	delta=b*b-4*a*c;
	if(delta < 0)
	{
		printf("equazione impossibile");
	}
	else
	{
		x1=(-bsqrt(delta))/(2*a);
		x2=(-bsqrt(delta))/(2*a);
		printf("\nx1 %f x2 %f", x1, x2);	
	}
}
