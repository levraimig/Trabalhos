#include <stdio.h>

int soma(int a, int b){

int num = 1;

if(a > b){
    for(; a >= b; a++){
    num = num + a;
    }
}

else
     for(; b >= a; b++){
    num = num + b;

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
