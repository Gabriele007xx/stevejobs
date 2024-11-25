#include <stdio.h>

int main() {
	int allegato1[9][10];
    int allegato2[11][11];
    int i,j;

   
    for (i = 1; i < 10; i++) {
        for (j = 1; j < 10; j++) {
            allegato1[i][j] = i * j; 
        }
    }
    
    for (i = 0; i < 11; i++) {
        for (j = 0; j < 11; j++) {
        	if(j==0)
        	{
        		allegato2[i][j]=0;
			}
			else if(i==0)
			{
				allegato2[i][j]=0;
			}
			else
			{
				allegato2[i][j] = i * j; 
			}
        }
    }

    for (i = 1; i < 10; i++) {
        for (j = 1; j < 10; j++) {
            printf("%d\t", allegato1[i][j]); 
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i <= 10; i++) {
        for (j = 0; j <= 10; j++) {
            printf("%d\t", allegato2[i][j]); 
        }
        printf("\n");
    }
    return 0;
}

