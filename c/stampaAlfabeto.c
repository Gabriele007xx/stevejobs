#include <stdio.h>

void main(){
    int i, lettere, ascii;
    char scelta;
printf("Lettere minuscole o maiuscole? (scelta m/M): ");
scanf("%c", &scelta);

if(scelta == 'm'){
    ascii = 97;
} else if (scelta == 'M'){
    ascii = 65;
    } else{
        printf("Scelta non valida");
    }

for(i=0; i<26; i++){
    lettere = ascii + i;
    printf("%c ", lettere);
}
}
