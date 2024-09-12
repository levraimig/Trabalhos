#include <stdio.h>
#include <math.h>
#include <string.h>

funcao1(){
    printf("1");
    return;
}
funcao2(){
    return;
    printf("2");
}

main(){
    printf("3");
    funcao2();
    printf("4");
    funcao1();
    printf("5");


}
