#include <stdio.h>
#include <string.h>

int main()
{
	char parole[100]="oggi \x8a una bella giornata";
	int i, spazi;
	
	spazi=0;
	for(i=0;i<100;i++)
	{
		if(parole[i]==32)
		{
			spazi++;
		}
	}
	
	printf("Ci sono %d nella stringa %s", spazi+1, parole);
	
	for(i=0;i<100;i++)
	{
		if(parole[i]=='a')
		{
			parole[i]='e';
		}
		else if(parole[i]=='e')
		{
			parole[i]='i';
		}
		else if(parole[i]=='i')
		{
			parole[i]='o';
		}
		else if(parole[i]=='o')
		{
			parole[i]='u';
		}
		else if(parole[i]=='u')
		{
			parole[i]='a';
		}
	}
	printf("\n%s", parole);
}
