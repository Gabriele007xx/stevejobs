#include <stdio.h>
#include <string.h>

int main()
{
	FILE *file=fopen("articolo-giornale.txt", "r");
	
	char buffer[30][1000];
	
	
	int i,j;
	
	
	if(file==NULL)
	{
		printf("Impossibile aprire file.\n");
		return -1;
	}
	i=0;
	while(fgets(buffer[i],1000,file)!=NULL && i<30)
	{
		
		i++;
	}
	
	for(i=0;i<30;i++)
	{
		for(j=0;j<strlen(buffer[i])+1;j++)
		{
			printf("%c", buffer[i][j]);
		}
	}
	fclose(file);
	return 0;
}
