#include <stdio.h>

int getLenght(char parola[])
{
	int i=0;
	while(parola[i]!=0)
	{
		i++;
	}
	return i;
}

int main()
{
    FILE *file=fopen("articolo_giornale.txt", "r");
    
    char buffer[100];
    
    if(file==NULL)
    {
    	printf("Impossibile aprire il file");
    	return -1;
	}
    
    int i,conteggio;
    
	conteggio=0;
   	while(fgets(buffer,100,file)!=NULL)
	{
		for(i=0;i<getLenght(buffer);i++)
		{
			if(buffer[i]=='a' && buffer[i+1]=='l' && buffer[i+2]=='u' && buffer[i+3]=='n' && buffer[i+4]=='n' && buffer[i+5]=='i' )
			{
				conteggio++;
			}	
		}
	}
	
	printf("Ci sono %d parole 'alunni'", conteggio);
	fclose(file);
    return 0;
}

esercizio27.c
Visualizzazione di esercizio27.c.
Esercizio 27: Conta parola nel file
Benedetto D'Onofrio
•
11 dic 2024 (Ultima modifica: 13 gen)
Consegna: 1 gen
Dato il file allegato "articolo_giornale.txt", scrivere un programma in C che restituisca il numero di occorrenze della parola "alunni" nel file.
Proporre una soluzione senza l'uso della libreria string.h

articolo_giornale.txt
Testo
Commenti sul corso
