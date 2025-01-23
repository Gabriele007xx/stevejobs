#include <stdio.h>

void copia(char str1[], char str2[])
{
	int i;
	for(i=0;i<ottieniLunghezza(str1);i++)
	{
		str2[i]=str1[i];
	}
}

int ottieniLunghezza(char str[])
{
	int i=0;
	while(str[i]!=0)
	{
		i++;
	}
	return i;
}

void inserisciCarattere(char stringa[], int offset)
{
	int i;
	char last = stringa[ottieniLunghezza(stringa)];
	for(i=ottieniLunghezza(stringa);i>=offset;i--)
	{
		stringa[i] = stringa[i - 1];
	}
    stringa[offset] = last;
}

int main()
{
	FILE *file=fopen("articolo-giornale.txt", "r");
	FILE *file1=fopen("articolo-giornale-new.txt", "w");
	
	char buffer[100];
	
	int i;
	
	int lenght;
	
	if(file==NULL)
	{
		printf("Impossibile aprire file.\n");
		return -1;
	}
	i=0;
	while(fgets(buffer,100,file)!=NULL)
	{
		char stringa[ottieniLunghezza(buffer)+2];
		copia(buffer, stringa);
		
		for(i=0;i<ottieniLunghezza(stringa);i++)
		{
			if(stringa[i]=='a' && stringa[i+1]=='l' && stringa[i+2]=='u' && stringa[i+3]=='n' && stringa[i+4]=='n' && stringa[i+5]=='i')
			{
				inserisciCarattere(stringa, i+6);
				inserisciCarattere(stringa, i+7);
				stringa[i]='a';
				stringa[i+1]='l';
				stringa[i+2]='l';
				stringa[i+3]='i';
				stringa[i+4]='e';
				stringa[i+5]='v';
				stringa[i+6]='i';
				stringa[i+7]=' ';
			}
		}
		fprintf(file1,"%s",stringa);
	}
	
	fclose(file);
	
	printf("Ho finito.");
}
