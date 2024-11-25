#include <stdio.h>
#define N 10

int main() {
    int vett[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},i;

    int primo[N];
    int secondo[N];
    int terzo[N];

    for (i = 0; i < N / 2; i++) {
        primo[i] = vett[N / 2 + i];
        primo[N / 2 + i] = vett[i];
    }

    for (i = 0; i < N; i++) {
        secondo[i] = vett[N - 1 - i];
    }

    for (i = 0; i < N; i++) {
    	if(vett[i] % 2 == 0)
    	{
    		terzo[i]=1;
		}
		else
		{
			terzo[i]=0;
		}
    }

    for (i = 0; i < N; i++) {
        printf("%d ", primo[i]);
    }
    printf("\n");

    for (i = 0; i < N; i++) {
        printf("%d ", secondo[i]);
    }
    printf("\n");

    for (i = 0; i < N; i++) {
        printf("%d ", terzo[i]);
    }
    printf("\n");

    return 0;
}

