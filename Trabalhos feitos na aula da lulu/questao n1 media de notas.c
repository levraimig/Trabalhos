#include <stdio.h>

int main(){

float nota1;
float nota2;
float nota3;
float media;

printf("Insira a nota1\n");
scanf("%f", &nota1);
printf("Insira a nota2\n");
scanf("%f", &nota2);
printf("Insira a nota3\n");
scanf("%f", &nota3);

media = (nota1 + nota2 + nota3) / 3;
float nota_rec = 10 - media + 2;
float nota_final = 10 - media;


if(media <= 4.9){
    printf("voce esta em recuperacao\n");

    printf("Para voce conseguir passar de ano, precisara tirar %f\n", nota_rec);
}


    if(media > 5 && media <= 6.9){
      printf("Voce esta em prova final\n", media);
      printf("Para voce conseguir passar de ano, precisara tirar %f\n", nota_final);

    }

    if(media > 7){
         printf("Voce passou de ano\n");
    }
return 0;
}
