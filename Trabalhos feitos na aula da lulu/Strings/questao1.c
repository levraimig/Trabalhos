#include <stdio.h>

main(){

char frase[50];
char letra;
char espaco[50];
int j = 0;


printf("Insira uma frase");
gets(frase);

printf("Insira uma letra");
scanf("%c", &letra);

for(int i = 0; i < 50; i++){
    if(frase[i] != letra){
            espaco[j] = frase[i];
    j++;

    }
}
printf("A frase modificada sem o caractere '%c' eh %s \n", letra, espaco);






}
