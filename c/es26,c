#include <stdio.h>
#include <string.h>

int main()
{
	FILE *file1=fopen("Nomi.txt", "r");
	FILE *file2=fopen("Cognomi.txt", "r");
	FILE *file3=fopen("Compito.txt", "w");
	
	char buffer[100];
	char buffer2[100];
	
	int i;
	
	int lenght;
	
	if(file1==NULL)
	{
		printf("Impossibile aprire file.\n");
		return -1;
	}
	if(file2==NULL)
	{
		printf("Impossibile aprire file.\n");
		return -1;
	}
	if(file3==NULL)
	{
		printf("Impossibile creare il file.\n");
	}
	i=0;
	while(fgets(buffer,100,file1)!=NULL && fgets(buffer2,100,file2)!=NULL)
	{
		buffer[strlen(buffer)-1]=32;
		fprintf(file3,"%s %s",buffer,buffer2);
		i++;
	}
	
	fclose(file1);
	fclose(file2);
	fclose(file3);
	
	printf("Ho finito.");
}
esercizio26.c
Visualizzazione di esercizio26.c.
Esercizio 26: Combina file
Benedetto D'Onofrio
•
9 dic 2024 (Ultima modifica: 13 gen)
Consegna: 1 gen
Un file di testo contiene un elenco di nomi
Un altro file di testo contiene il rispettivo elenco di cognomi

Scrivere un programma n C in grado di generare un altro file di testo contenente l'elenco di Nomi e Cognomi (un nominativo per riga)

Cognomi.txt
Testo

Nomi.txt
Testo
Commenti sul corso
