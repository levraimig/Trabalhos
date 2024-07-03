#include <stdio.h>
#include <conio.h>
#include <string.h>

main(){

struct aluno{
    int num;
    char nome[10];
    float nota1;
    float nota2;
    float media;
};
struct aluno aluno1[3];

for(int i = 0; i < 3; i++){
    printf("\nInsira o numero do aluno %d:", i+1);
    scanf("%d", &aluno1[i].num);
    printf("\nInsira o nome do aluno %d:", i+1);
    scanf("%s", aluno1[i].nome);
    printf("\nInsira a nota1 do aluno %d:", i+1);
    scanf("%f", &aluno1[i].nota1);
    printf("\nInsira a nota2 do aluno %d:", i+1);
    scanf("%f", &aluno1[i].nota2);
}

for(int i = 0; i < 3; i++){
    printf("\nnome %s", aluno1[i].nome);
    printf("\nNota 1 %0.2f", aluno1[i].nota1);
    printf("\nNota 2 %0.2f", aluno1[i].nota2);
    printf("\nMedia%0.2f", (aluno1[i].nota1 + aluno1[i].nota2) / 2);
}



}
