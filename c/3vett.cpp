#include <stdio.h>

#define N 10 // Numero pari, modificabile

int main() {
    // Vettore di input preinizializzato
    int input[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Vettori da generare
    int scambiato[N];
    int ribaltato[N];
    int pari_dispari[N];

    // Generazione del primo vettore (scambiato)
    for (int i = 0; i < N / 2; i++) {
        scambiato[i] = input[N / 2 + i];
        scambiato[N / 2 + i] = input[i];
    }

    // Generazione del secondo vettore (ribaltato)
    for (int i = 0; i < N; i++) {
        ribaltato[i] = input[N - 1 - i];
    }

    // Generazione del terzo vettore (pari_dispari)
    for (int i = 0; i < N; i++) {
        pari_dispari[i] = (input[i] % 2 == 0) ? 1 : 0;
    }

    // Output dei vettori
    printf("Vettore originale: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", input[i]);
    }
    printf("\\n");

    printf("Vettore scambiato: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", scambiato[i]);
    }
    printf("\\n");

    printf("Vettore ribaltato: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", ribaltato[i]);
    }
    printf("\\n");

    printf("Vettore pari/dispari: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", pari_dispari[i]);
    }
    printf("\\n");

    return 0;
}

