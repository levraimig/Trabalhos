#include <stdio.h>

int soma(int a, int b){

int num = 0;

if(a > b){
    for(int i = a; a >= b; i--){
    num = num + i;
    }
}

else
     for(int i = a; i <= b; i++){
    num = num + i;

}

return num;

}

main(){


int x;
int y;

printf("Escreva dois valores\n");
scanf("%d", &x);
scanf("%d", &y);

printf("A soma de todos os valores entre %d e %d eh %d", x, y, soma(x,y));

}
