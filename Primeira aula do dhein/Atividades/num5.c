#include <stdio.h>
#include <string.h>


char calc(char a[100]){
    int soma;
for (int x = 0; a[x]; x++){
    soma++;
}
return soma - 1;


}


main(){

char a[100];

printf("Escreva uma frase: ");
fgets( a, 100,  stdin);

printf("O numero de caracteres eh %d ", calc(a));

}
