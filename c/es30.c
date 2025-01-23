#include <stdio.h>

int main()
{
	FILE *file=fopen("numeri.txt", "r");
	char buffer[5];
	int i,n;
	if(file==NULL)
	{
		printf("Impossibile aprire il file.");
		return -1;
	}
	while(fgets(buffer,5,file)!=NULL)
	{
			n=(buffer[0]-48)*1000+(buffer[1]-48)*100+(buffer[2]-48)*10+(buffer[3]-48);
			printf("%c*1000+%c*100+%c*10+%c=%d\n", buffer[0], buffer[1], buffer[2], buffer[3], n);
	}
	return 0;
}
