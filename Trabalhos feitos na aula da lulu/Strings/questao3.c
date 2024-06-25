#include <stdio.h>

main(){

char letra[10];

printf("\nPara sair, digite 'Z'");

for(int i = 0; i < 10; i++){
    printf("Escolha a letra\n");
    scanf("%s", &letra[i]);
    if(letra[i] == 'Z'){
        printf("\nVoce escolheu sair..");
        break;
    }
}


}
