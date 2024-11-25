#include <stdio.h>

int main()
{
	int max,min,value;
	
	printf("Dammi il numero: ");
	scanf("%d", &value);
	max=value;
	min=value;
	for(int i=0;i<7;i++)
	{
		printf("Dammi il numero: ");
		scanf("%d", &value);
		if(value>max)
		{
			max=value;
		}
		if(value<min)
		{
			min=value;
		}
	}
	printf("Il massimo\x8A %d. Il minimo \x8A %d", max, min);
	return 0;
}
