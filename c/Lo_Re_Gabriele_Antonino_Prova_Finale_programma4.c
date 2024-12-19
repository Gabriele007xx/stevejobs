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
	char ora2[6];
	
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
			// basta la m perchè mario è l'unico che inizia con la m
			if(buffer[i]=='l' && buffer[i+1]=='o' && buffer[i+2]=='g' && buffer[i+3]=='o' && buffer[i+7]=='m')
			{
				ora2[0]=buffer[30];
				ora2[1]=buffer[31];
				ora2[2]=buffer[33];
				ora2[3]=buffer[34];
				ora2[4]=buffer[36];
				ora2[5]=buffer[37];
			}
	}
	int ore_1_1=(ora[0]-48)*36000;
	int ore_1_2=(ora[1]-48)*3600;
	int minuti1_1=(ora[2]-48)*600;
	int minuti1_2=(ora[3]-48)*60;
	
	int ore2_1=(ora2[0]-48)*36000;
	int ore2_2=(ora2[1]-48)*3600;
	int minuti2_1=(ora2[2]-48)*600;
	int minuti2_2=(ora2[3]-48)*60;
	
	int primo=ore_1_1+ore_1_2+minuti1_2+minuti1_2;
	int secondo=ore2_1+ore2_2+minuti2_1+minuti2_2;
	
	int sec=(secondo+((ora2[4]-48)*10)+(ora2[5]-48))-(primo+((ora[4]-48)*10)+(ora[5]-48));
	printf("Mario ha loggato per %d secondi", sec);
	fclose(file);
	return 0;
}

