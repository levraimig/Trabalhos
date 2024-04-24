#include <stdio.h>
#include <math.h>

main(){

int idade;
int sexo;
int soma;
int media;
int total_feminino = 0;
int total_masculino = 0;
int n;

printf("Quantas pessoas voce deseja colocar no banco?");
scanf("%d", &n);


soma = 0;
for(int i = 0; i <n; i++){

    printf("\ninsira a idade que quiser");
    scanf("%d", &idade);

    printf("insira 0 para masculino ou 1 feminino\n");
    scanf("%d", &sexo);

    if(sexo == 1 && idade >= 30 && idade <= 45){
    total_feminino++;
}else{

total_masculino++;

}

    soma = soma + idade;
}

media = soma / n;

 printf("\nMedia:%d", media);
printf("feminino com idade entre 30 - 45: %d\n", total_feminino);
printf("Masculino: %d\n", total_masculino);






}
