#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100] = " Facciamo  insieme questo esercizio";
    int i=0;

    while (frase[i]!=0) 
	{
    	if(frase[i]==32 && i==0)
    	{
    		i++;
    		continue;
		}
        if (frase[i] == 32 && frase[i + 1] != 32 && frase[i + 1] !=0) {
    		printf("\n");
        }
        else if (frase[i]!=32) {
			printf("%c", frase[i]);
        }
        i++;
    }
    return 0;
}

