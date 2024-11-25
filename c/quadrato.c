#include <stdio.h>

int main()
{
	int lato,i,j;
	
	printf("Dammi il lato: ");
	scanf("%d", &lato);
	for(i=0;i<lato;i++)
	{
		for(j=0;j<lato;j++)
		{
			printf("*");	
		}
		printf("\n");
	}
	
	printf("-------------\n");
	
	for(i=0;i<lato;i++)
	{
		if(i==0 || i==lato-1)
		{
			for(j=0;j<lato;j++)
			{
				printf("*");	
			}
		}
		else
		{
			for(j=0;j<lato;j++)
			{
				if(j==0 || j==lato-1)
				{
					printf("*");	
				}
				else
				{
					printf(" ");
				}	
			}
		}
		
		printf("\n");
	}
	
	return 0;
}
