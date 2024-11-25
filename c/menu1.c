#include <stdio.h>
#include <math.h>

int main() {
    int scelta;
	int a, b;

    do {
        printf("\nMenu:\n");
        printf("1) Calcolare la media di due valori\n");
        printf("2) Scambiare i due valori memorizzati nelle variabili\n");
        printf("3) Calcolare l'ipotenusa dato i due cateti\n");
        printf("4) Confrontare due valori e determinare il maggiore\n");
        printf("Scegli una opzione (1-4): ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
            	printf("Inserisci il primo valore: ");
            	scanf("%d", &a);
            	printf("Inserisci il secondo valore: ");
            	scanf("%d", &b);
                printf("La media \x8a: %d", ((float)a+b)/2);
                break;
            case 2:
            	printf("Inserisci il primo valore: ");
            	scanf("%d", &a);
            	printf("Inserisci il secondo valore: ");
            	scanf("%d", &b);
                scambiaValori(&valore1, &valore2);
                break;
            case 3:
            	printf("Inserisci il primo valore: ");
            	scanf("%d", &a);
            	printf("Inserisci il secondo valore: ");
            	scanf("%d", &b);
				printf("L'ipotenusa \x8a: %f", sqrt(a * a + b * b));
                break;
            case 4:
            	printf("Inserisci il primo valore: ");
            	scanf("%d", &a);
            	printf("Inserisci il secondo valore: ");
            	scanf("%d", &b);
                if (a == b) 
				{
        			printf("I due valori sono uguali.\n");
    			} else 
				{
        		if (a > b) {
            		printf("Il valore maggiore è: %.2f\n", a);
        		} else {
            		printf("Il valore maggiore è: %.2f\n", b);
        		}
    			}
                break;
            default:
                printf("Scelta errata! Riprova.\n");
                break;
        }
    }
    while(scelta<1 || scelta>4);

    return 0;
}

