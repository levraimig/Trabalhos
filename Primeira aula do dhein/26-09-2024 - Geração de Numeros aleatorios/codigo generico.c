#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int r;
    int ini;
    int fim;
    printf("Digite o inicio e o final do intervalo: ");
    scanf("%d", &ini);
    scanf("%d", &fim);

    printf("\n");
    srand((unsigned)time (NULL));
    for(int i = 0; i < 20; i++){
        r =rand()%(fim-ini+1) +ini;
        printf("%d\n", r);
    }

}
