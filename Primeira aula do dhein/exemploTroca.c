#include <stdio.h>

void troca (int, int);

void main (void){
    int a = 5, b = 10;
    printf("\n%d - %d", a, b);
    troca(a,b);
    printf("\n%d - %d", a,b);
}

void troca (int x, int y){
    int z;
    printf("\n%d - %d", x,y);
    z = x;
    x = y;
    y = z;
    printf("\n %d - %d", x, y);
}
