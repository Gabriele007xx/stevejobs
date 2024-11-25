#include <stdio.h>

void main()
{
	int voto1,voto2,voto3,voto4,voto5;
	float media;
	
	printf("Inserire voto: ");
	scanf("%d", &voto1);
	printf("Inserire voto: ");
	scanf("%d", &voto2);
	printf("Inserire voto: ");
	scanf("%d", &voto3);
	printf("Inserire voto: ");
	scanf("%d", &voto4);
	printf("Inserire voto: ");
	scanf("%d", &voto5);
	
	media=((float)voto1+voto2+voto3+voto4+voto5)/5;
	printf("\nmedia %f", media);
}
