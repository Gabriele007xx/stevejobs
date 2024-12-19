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
	
	FILE *output=fopen("access.csv", "w");
	
	if(file==NULL)
	{
		printf("Impossibile aprire il file.");
		return -1;
	}
	//non mettiamo quello di output perchè è in write come il nostro benny dice
	int i;
	
	while(fgets(buffer,1000,file)!=NULL)
	{
		for(i=0;i<contaCarratteri(buffer);i++)
		{
			if(buffer[i]==' ' || buffer[i]=='T')
			{
				buffer[i]=';';	
			}
		}
		fprintf(output,"%s",buffer);
	}
	printf("File generato.");
	fclose(file);
	fclose(output);
	return 0;
}
