#include <stdio.h>
#include <math.h>

int main()
{
	int numero, tentativi=0, n;
	do
	{
		printf("Dammi un numero tra 1 e 9: ");
	scanf("%d", &numero);
	}
	while(numero<1 || numero>9);
	printf("Indovina il numero: ");
	scanf("%d", &n);
	while(n!=numero)
	{
		tentativi++;
		printf("Sbagliato! Prova ad indovinarlo di nuovo: ");
		scanf("%d", n);
	}
	printf("Hai indovinato il numero in %d tentativi", tentativi);
	return 0;
}
