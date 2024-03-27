#include <stdio.h>
#include <math.h>

main(){

int folhas;
float valor;
float total;

printf("Quantas folhas voce deseja?");
scanf("%d", &folhas);

if(folhas <= 100){


    valor = 0.25;
  total = valor * folhas;
  printf("O total que sera pago eh RS%.2f", total);
}
if(folhas > 100){
    valor = 0.20;
    total = valor * folhas;
    printf("O total que sera pago eh RS%.2f", total);
}


}
