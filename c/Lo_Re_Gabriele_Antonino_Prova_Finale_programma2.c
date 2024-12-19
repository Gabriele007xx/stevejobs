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
	int count;
	
	count=0;
	while(fgets(buffer,1000,file)!=NULL)
	{
		for(i=0;i<contaCarratteri(buffer);i++)
		{
			if(buffer[i]!=10 && buffer[i]!='\0')
			{
				count++;	
			}
		}
	}
	printf("Il numero di caratteri presenti \x8a: %d",count);
	fclose(file);
	return 0;
}
