#include <stdio.h>
 
int main (){
	
	char str[100]=" oggi \x8a una bella giornata "; 
	int numeroParole,i;
	numeroParole=0;
	
	
	for (i=0;str[i]!='\n';i++){
		if( i==0 && str[i]!=32){
			numeroParole++;
		}
		if(str[i]!=32 && str[i-1]==32 && str[i]!=0){
			numeroParole++;
		}
		
	}
	printf(" Ha un numero di parole pari a: %d\n",numeroParole);
	
	for (i=0;str[i]!='\n';i++){ 
		if (str[i]=='a'){
			str[i]='e';
		}
		else if (str[i]=='e'){
			str[i]='i';
		}
		else if (str[i]=='i'){
				str[i]='o';
			}
		else if (str[i]=='o'){
				str[i]='u';
			}
		else if (str[i]=='u'){
			str[i]='a';
		}
	}
	printf("%s",str);
}
