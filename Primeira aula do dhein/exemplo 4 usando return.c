#include <stdio.h>
#include <math.h>
#include <string.h>

int n1, n2, maior1, maior2, maior;

int funcaoMaior(void){

    if(n1 > n2){
    return n1;
    }else{
    return n2;
    }
}

main(){
scanf("%d", &n1);
scanf("%d", &n2);

maior1 = funcaoMaior();

scanf("%d", &n1);
scanf("%d", &n2);

maior2 = funcaoMaior();

n1 = maior1;
n2 = maior2;

printf("Maior: %d", funcaoMaior(););







}
