#include <stdio.h>
#define N 5

int main() {
    int vett[N];
    int scelta, temp, i;

    for (i = 0; i < N; i++) {
        printf("Inserire elemento: ");
        scanf("%d", &vett[i]);
    }

    do {
        printf("\n1) Rotazione a destra del vettore\n");
        printf("2) Rotazione a sinistra del vettore\n");
        printf("3) Uscita\n");
        printf("La tua scelta: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                temp = vett[N - 1]; 
                for (i = N - 1; i > 0; i--) {
                    vett[i] = vett[i - 1];
                }
                vett[0] = temp; 
                for (i = 0; i < N; i++) {
                    printf("%d ", vett[i]);
                }
                printf("\n");
                break;

            case 2:
                temp = vett[0];
                for (i = 0; i < N - 1; i++) {
                    vett[i] = vett[i + 1];
                }
                vett[N - 1] = temp;
                for (i = 0; i < N; i++) {
                    printf("%d ", vett[i]);
                }
                printf("\n");
                break;

            case 3:
                break;

            default:
                printf("Scelta errata\n");
        }
    } while (scelta != 3);

    return 0;
}

