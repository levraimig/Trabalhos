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

int n1, n2, maior1, maior2, maior;
scanf("%d", &n1);
scanf("%d", &n2);

maior1 = funcaoMaior(n1,n2);

scanf("%d", &n1);
scanf("%d", &n2);

maior2 = funcaoMaior(n1,n2);

printf("Maior: %d", funcaoMaior(maior1, maior2));







}
