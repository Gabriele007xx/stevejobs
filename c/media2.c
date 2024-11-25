#include <stdio.h>

int main()
{
	int somma=0,numVoti, singoloVoto, i;
	
	printf("Dammi il numero di voti: ");
	scanf("%d", &numVoti);
	for(i=0;i<numVoti;i++)
	{
		printf("Dammi il voto: ");
		scanf("%d", &singoloVoto);
		somma=somma+singoloVoto;
	}
	printf("La media \x8A %f", (float)somma/numVoti);
	return 0;
}
