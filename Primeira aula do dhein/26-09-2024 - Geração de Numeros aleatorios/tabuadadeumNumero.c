#include <stdio.h>

void tabuada(int num){
    for(int i = 0; i <= 10; i++){
    printf("%d * %d = %d\n", num, i, num*i);
    }
    }

    void tabuadas(void){
    int n;
    for (n = 1; n <= 10; n++)
        tabuada(n);
    }


main(){
int num;
printf("Digite um numero para exibiar a tabuada: ");
scanf("%d", &num);
tabuadas();




}
