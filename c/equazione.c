#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c;
	float delta,x1,x2;
	printf("Inserisci il coeficiente a: \n");
	scanf("%d", &a);
	printf("Inserisci il coeficiente b: \n");
	scanf("%d", &b);
	printf("Inserisci il coeficiente c: \n");
	scanf("%d", &c);
	
	delta=b*b-4*a*c;
	
	x1=(-b+sqrt(delta))/(2*a);
	x2=(-b-sqrt(delta))/(2*a);
	
	printf("Le due soluzioni sono x1:%f x2:%f", x1,x2);
	
	return 0;
	
}
