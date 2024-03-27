#include <stdio.h>
#include <math.h>

main(){

char nome[50];
int idade;
int valor;

printf("\nQual seu nome?");
scanf("%s", &nome);

printf("\n Qual sua idade?");
scanf("%d", &idade);

if(idade <= 10){
    valor = 30;
}else if(idade > 10 && idade <= 29){
    valor = 60;
}else if(idade > 29 && idade <= 45){
    valor = 120;
}else if(idade > 45 && idade <= 59){
    valor = 150;
}    else if(idade > 59 && idade <= 65){
    valor = 250;
}
else{
    valor = 400;
}

printf("O valor que %s ira pagar eh de RS%d", nome, valor);


}
