#include <stdio.h>

void stampaVettore(int vett[],int dim)
{
	int i;
	for(i=0;i<dim;i++)
	{
		printf("%d ", vett[i]);
	}
}

int main()
{
	int vett[10]={76,54,32,11,90,8,7,5,4,3},swap,ind,j,i,minimo;
	ind=0;
	minimo=vett[0];
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
		{
			if(vett[j]<vett[ind])
			{
				minimo=vett[j];
				ind=j;
				printf("Minimo: %d indice %d\n ", minimo, ind);
			}
		}
		swap=vett[i];
		vett[i]=vett[ind];
		vett[ind]=swap;
		stampaVettore(vett,10);
		printf("\nFine ciclo i=%d\n", i);
	}
	
}
