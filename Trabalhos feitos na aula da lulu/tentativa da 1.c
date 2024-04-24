#include <stdio.h>
#include <math.h>

main (){

int num;
int num_par= 0;
int num_impar=0;

for(int i = 0; i <= 10; i++){

printf("Digite 1 numeros por favor");
scanf("%d", &num);

}
for (int k = 0; k <= 10; k++){
    if(num % 2 == 0){
        num_par++;
    }else{
    num_impar++;
    }
}

printf("A quantidade de numeros par sao de %d e de impares %d", num_par, num_impar);






}
