#include <stdio.h>
#include <math.h>
#include <string.h>


int g (int x){
    return x + 2;
}

void f (int x, char y){
    printf("\nOs valores passados foram: %d, %c", x, y);

}
main(void){
    int a = 66;
    char b = 'B';
    f(65, 'A'); // constantes
    f(a, b); //
    f(a++, b+1); // expressoes
    f(g(a), b+2); // funcao e expressao


}
