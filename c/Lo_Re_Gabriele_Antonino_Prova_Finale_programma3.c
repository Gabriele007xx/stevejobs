#include <stdio.h>

int contaCarratteri(char s[])
{
	int i;
	i=0;
	while(s[i]!=0)
	{
		i++;
	}
	return i;
}

int main()
{
	FILE *file=fopen("access.log", "r");
	
	char buffer[1000];
	
	if(file==NULL)
	{
		printf("Impossibile aprire il file.");
		return -1;
	}
	int i;
	char ora[6];
	
	i=0;
	while(fgets(buffer,1000,file)!=NULL)
	{
			// basta la m perchè mario è l'unico che inizia con la m
			if(buffer[i]=='l' && buffer[i+1]=='o' && buffer[i+2]=='g' && buffer[i+3]=='i' && buffer[i+6]=='m')
			{
				ora[0]=buffer[29];
				ora[1]=buffer[30];
				ora[2]=buffer[32];
				ora[3]=buffer[33];
				ora[4]=buffer[35];
				ora[5]=buffer[36];
			}
	}
	printf("Mario ha loggato il %c%c:%c%c:%c%c",ora[0],ora[1],ora[2],ora[3],ora[4],ora[5]);
	fclose(file);
	return 0;
}
