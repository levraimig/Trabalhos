#include <stdio.h>
#include <math.h>

main(){

int qtd_eleitores = 0;
int A, B, C = 0;
int nulo = 0;
int voto;
int aumento = 0;

printf("Quantos eleitores hoje?\n");
scanf("%d", &qtd_eleitores);

printf("Vote nos candidatos A, B, C ou Nulo\n");
printf("  1 -> A \n 2 -> B \n 3 - > C\n 4 -> Nulo\n\n");

for(int i = 1; i < 6; i++){
    aumento = i;

printf("%d voto?\n", aumento);
scanf("%d", &voto);

switch(voto){

case 1:
    A++;
    break;
case 2:
    B++;
    break;
case 3:
    C++;
    break;
case 4:
    nulo++;
    break;
default:
    printf("Numero fora do requisito\n");
    break;
}

}

printf("Resultados:\n A:%d \n B:%d \n C:%d \n Nulo:%d \n", A, B, C, nulo);






}
