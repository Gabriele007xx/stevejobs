#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c;
	float x1,x2,delta;
	
	printf("Inserire a: ");
	scanf("%d", &a);
	printf("Inserire b: ");
	scanf("%d", &b);
	printf("Inserire c: ");
	scanf("%d", &c);
	
	if(a==0)
	{
		printf("non \x8A un equazione di secondo grado");
		return 0;
	}
	else
	{
		delta=b*b-4*a*c;
		if(delta < 0)
		{
			printf("equazione impossibile");
			return 0;
		}
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("\nx1 %f x2 %f", x1, x2);	
	}
	return 0;
}
