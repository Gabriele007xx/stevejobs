#include <stdio.h>
#define N 4

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
	int vett1[N]={1,2,3,4},vett2[N]={1,2,3,4},somma[N],prodotto,i;
	for(i=0;i<N;i++)
	{
		somma[i]=vett1[i]+vett2[i];
	}
	prodotto=0;
	for(i=0;i<N;i++)
	{
		prodotto=prodotto+vett1[i]*vett2[i];
	}
	stampaVettore(somma, N);
	printf("\nIl prodotto \x8a %d", prodotto);
	return 0;
}
