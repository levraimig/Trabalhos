#include <stdio.h>


main(){

int tamanho = 0;
char str[100];

printf("Digite um string\n");
gets(str);
tamanho = strlen(str);

printf("Posusem %d caracteres\n", tamanho);

}
