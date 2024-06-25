#include <stdio.h>

main(){

char codigo[5];
char Produto[5] = {'Hamburguer', 'CheeseBurguer', 'MistoQuente', 'Americano', 'QueijoPrato'};
int valor[5] = {5, 6, 4, 8, 7};
int Quantidade1,Quantidade2,Quantidade3,Quantidade4,Quantidade5;
int valor_total1 = 0;
int valor_total2 = 0;
int valor_total3 = 0;
int valor_total4 = 0;
int valor_total5 = 0;
int valorr = 0;


repetir:
printf("O que voce deseja comer hoje?\n");
printf("Digite 'H' para Hamburguer.\n");
printf("Digite 'C' para CheeseBurguer.\n");
printf("Digite 'M' para MistoQuente.\n");
printf("Digite 'A' para Americano.\n");
printf("Digite 'Q' para QueijoPrato.\n");

for(int i =0; i <5; i++){
    scanf("%c", &codigo[i]);
    if(codigo[i] == 'H'){
        printf("Quantas unidades:\n");
        scanf("%d", &Quantidade1);
        valor_total1 = valor[0] * Quantidade1;
    }
    else if(codigo[i] == 'C'){
        printf("Quantas unidades:\n");
        scanf("%d", &Quantidade2);
        valor_total2 = valor[1] * Quantidade2;
    }
    else if(codigo[i] == 'M'){
        printf("Quantas unidades:\n");
        scanf("%d", &Quantidade3);
        valor_total3 = valor[2] * Quantidade3;
    }
    else if(codigo[i] == 'A'){
        printf("Quantas unidades:\n");
        scanf("%d", &Quantidade4);
        valor_total4 = valor[3] * Quantidade4;
    }
    else if(codigo[i] == 'Q'){
        printf("Quantas unidades:\n");
        scanf("%d", &Quantidade5);
        valor_total5 = valor[4] * Quantidade5;
    }
    printf("Se voce deseja, mais alguma coisa no pedido, digite '.'");
    if(codigo[i] == '.'){
        goto repetir;
    }
        else{
          break;
        }

}
valorr = valor_total1 + valor_total2 + valor_total3 + valor_total4 + valor_total5;
printf("o valor total do pedido eh %d\n", valorr);




}
