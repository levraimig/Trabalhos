#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int colocaVet(int vet[50]){

    int r;



    for(int i = 0; i < 50; i++)
        vet[i] = - 1;
    for(int i = 50; i > 0; i--){
        r = rand() % i;


        for(int j = 0; r > 0; j++){
            if(vet[j] == -1)
                r--;
        for(int j; vet[j]!= -1; j++); // se a contagem terminou em um ocupado
        printf("Insira os valors para os vetores");
        scanf("%d", &vet[j]);
        }
    }



}



int main(){

    int vet[50];
    srand((unsigned)time(NULL));

}
