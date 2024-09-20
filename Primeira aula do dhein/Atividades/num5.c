#include <stdio.h>
#include <string.h>


int calc(char a[100]){

int carac = 0;

carac = strlen(a);
return carac;

}


main(){

char a[100];

printf("Escreva uma frase: ");
fgets(a, 100, stdin);

printf("O numero de caracteres eh %d", calc(a));

}
