#include <stdio.h>

void main()
{
	int base, altezza, area;
	printf("Inserire la base del rettangolo... ");
	scanf("%d", &base);
	printf("\nInserire l'altezza del rettangolo... ");
	scanf("%d", &altezza);
	area=base*altezza;
	printf("\nArea rettangolo \x8A %d", area);
}
