#include <stdio.h>
#include <math.h>

int func_ano(int ano){
    if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        return 1;
    else
        return 0;
}

main(){

int ano;
printf("\nEscreva um ano para sabermos se ele eh bisexto: ");
scanf("%d", &ano);

if (func_ano(ano))
    printf("O ano %d eh bisexto", ano );
else
    printf("O ano %d nao eh bisexto", ano);

}
