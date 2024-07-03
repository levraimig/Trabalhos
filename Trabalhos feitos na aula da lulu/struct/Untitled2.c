#include <stdio.h>
#include <conio.h>
#include <string.h>

main(){

int j = 0;
float soma_salario = 0;
    int soma_filhos = 0;
struct rotina{
    float salario;
    int filhos;


};
struct rotina pessoa[3];
for(int i = 0 ; i < 3; i++){
    printf("\nInsira o salario da pessoa %d:\n", i+1);
    scanf("%f", &pessoa[i].salario);
    printf("\nInsira quantos filhos a pessoa possui%d:\n", i+1);
    scanf("%d", &pessoa[i].filhos);
     soma_salario += pessoa[i].salario;
        soma_filhos += pessoa[i].filhos;

}
printf("\n processando os dados...");

 float media_salario = soma_salario / 3;
    float media_filhos = (float)soma_filhos / 3;

    printf("\nMédia do salário das 3 pessoas: %.2f", media_salario);
    printf("\nMédia de filhos das 3 pessoas: %.2f", media_filhos);

   for(int i = 0; i < 3; i++) {
        if(pessoa[i].salario <= 350.0) {
            j++;
        }
    }
    printf("\nPercentual %d\n", j / 3 * 100);

}

