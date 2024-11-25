#include <stdio.h>
#define N 5

float media(int vett[])
{
	int somma=0,i;
	for(i=0;i<N;i++)
	{
		somma=somma+vett[i];
	}
	return (float)somma/N;
}

int minimo(int vett[])
{
	int i,minimo;
	minimo=vett[0];
	for(i=1;i<N;i++)
	{
		if(minimo>vett[i])
		{
			minimo=vett[i];
		}
	}
	return minimo;
}

int massimo(int vett[])
{
	int i,massimo;
	massimo=vett[0];
	for(i=1;i<N;i++)
	{
		if(massimo<vett[i])
		{
			massimo=vett[i];
		}
	}
	return massimo;
}

int main()
{
	int scelta, vett[N],i;
	for(i=0;i<N;i++)
	{
		printf("Inserire un numero: ");
		scanf("%d", &vett[i]);
	}
	do
	{
		printf("1) Calcola Media\n");
		printf("2) Calcola Minino\n");
		printf("3) Calcola Massimo\n");
		printf("4) Esci\n");
		printf("La tua scelta: ");
		scanf("%d", &scelta);
		switch(scelta)
		{
			case 1:
				printf("La media \x8a: %f\n", media(vett));
				break;
			case 2:
				printf("Il minimo \x8a: %d\n", minimo(vett));
				break;
			case 3:
				printf("Il massimo \x8a: %d\n", massimo(vett));
				break;
			case 4:
				break;
			default:
				printf("Scelta errata!\n");				
		}
	}
	while(scelta!=4);
	return 0;
}
