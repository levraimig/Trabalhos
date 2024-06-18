#include <stdio.h>
#define L 4
#define C 4

main(){

int maior[L][C];
int x;
int encontrado = 0;
printf("insira o valor para 'X'");
        scanf("%d", &x);

printf("Insira os valores para matriz\n");
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
                printf("[%d] [%d]", i, j);
         scanf("%d", &maior[i][j]);
        }

    }


    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            if(maior[i][j] == x){
                printf("O 'X' foi encontrado na Linha [%d] e na Coluna [%d]\n", i,j);
            encontrado = 1;
            break;
            }

        }
    }
    if(!encontrado){
        printf("Nao achou baby\n");
    }
    }





