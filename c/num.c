#include <stdio.h>

int main()
{
	int a,b,c;
	
	printf("Dammi a: ");
	scanf("%d", &a);
	printf("Dammi b: ");
	scanf("%d", &b);
	printf("Dammi c: ");
	scanf("%d", &c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("%d", a);
		}
		else
		{
			printf("%d", c);			
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d", b);
		}
		else
		{
			printf("%d", c);			
		}
	}
	
}
