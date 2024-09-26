#include <stdio.h>
#include <math.h>
#include <string.h>



int funcaoMaior(int a, int b){

    if(a > b){
    return a;
    }else{
    return b;
    }
}

main(){

int n1, n2, n3, n4;
scanf("%d", &n1);
scanf("%d", &n2);
scanf("%d", &n3);
scanf("%d", &n4);
printf("Maior: %d", funcaoMaior(funcaoMaior(n1, n2), funcaoMaior(n3, n4)));







}
