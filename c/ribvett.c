#include <stdio.h>

#define N 10

int main() {
    int input[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int scambiato[N];
    int ribaltato[N];
    int pari_dispari[N];

    for (int i = 0; i < N / 2; i++) {
        scambiato[i] = input[N / 2 + i];
        scambiato[N / 2 + i] = input[i];
    }
    
    for (int i = 0; i < N; i++) {
        ribaltato[i] = input[N - 1 - i];
    }

    for (int i = 0; i < N; i++) {
    	if(input[i] % 2 == 0)
    	{
    		 pari_dispari[i]=1;
		}
		else
		{
			 pari_dispari[i]=0;
		}
    }

    printf("Vettore scambiato: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", scambiato[i]);
    }
    printf("\n");

    printf("Vettore ribaltato: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", ribaltato[i]);
    }
    printf("\n");

    printf("Vettore pari/dispari: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", pari_dispari[i]);
    }
    printf("\n");

    return 0;
}

