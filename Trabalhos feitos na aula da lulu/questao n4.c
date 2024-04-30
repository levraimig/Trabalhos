#include <stdio.h>
#include <math.h>

main(){

int numero;
int menor;
int maior;
float media;
int soma = 0;

for(int i =0; i < 20; i++){

    menor = maior = i;

    soma += i;

    if(i > maior){
        maior = i;
    }
    if(i < menor){
        menor = i;
    }
}
media = soma / 20;

printf("media %d \n", media);
printf("soma %d\n", soma);
printf("maior %d\n", maior);
printf("menor %d\n", menor);



}
