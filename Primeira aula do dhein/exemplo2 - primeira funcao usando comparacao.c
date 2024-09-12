#include <stdio.h>
#include <math.h>
#include <string.h>

int n1, n2, maior1, maior2, maior;

void funcaoMaior(void){

    if(n1 > n2){
    maior = n1;
    }else{
    maior = n2;
    }
    return;
}

main(){
scanf("%d", &n1);
scanf("%d", &n2);

funcaoMaior();
maior1 = maior;

scanf("%d", &n1);
scanf("%d", &n2);

funcaoMaior();

maior2 = maior;


n1 = maior1;
n2 = maior2;
funcaoMaior();
printf("Maior: %d", maior);







}
