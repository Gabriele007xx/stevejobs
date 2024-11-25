#include <stdio.h>
#define SIZE 5

int main() {
    int vector[SIZE];
    int choice, temp, i;

    // Richiesta all'utente di inserire gli elementi del vettore
    printf("Inserisci %d elementi per il vettore:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    // Menu principale
    do {
        printf("\nMenu:\n");
        printf("1) Rotazione a destra del vettore\n");
        printf("2) Rotazione a sinistra del vettore\n");
        printf("3) Uscita\n");
        printf("Scelta: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                temp = vector[SIZE - 1]; 
                for (i = SIZE - 1; i > 0; i--) {
                    vector[i] = vector[i - 1];
                }
                vector[0] = temp; 
                for (i = 0; i < SIZE; i++) {
                    printf("%d ", vector[i]);
                }
                printf("\n");
                break;

            case 2:
                temp = vector[0];
                for (i = 0; i < SIZE - 1; i++) {
                    vector[i] = vector[i + 1];
                }
                vector[SIZE - 1] = temp;
                for (i = 0; i < SIZE; i++) {
                    printf("%d ", vector[i]);
                }
                printf("\n");
                break;

            case 3:
                break;

            default:
                printf("Scelta errata\n");
        }
    } while (choice != 3);

    return 0;
}

