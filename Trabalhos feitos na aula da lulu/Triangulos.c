#include <stdio.h>
#include <math.h>

main(){

int n1,n2,n3;

printf("\nDigite o valor do primeiro numero:");
scanf("%d", &n1);

printf("\nDigite o valor do segundo numero:");
scanf("%d", &n2);

printf("\nDigite o valor do terceiro numero:");
scanf("%d", &n3);

if(n1 + n2 > n3 && n2 + n3 > n1 && n3 + n1 > n2){
    printf(\n"Eh um triangulo");


if(n1 == n2 && n2 == n3 && n1 == n3){
    printf("\nO triangulo eh equilatero");
}
if(n1 == n2 || n1 == n3 || n2 == n3 ){
    printf("\nO trigangulo eh isoceles");
}
if(n1 != n2 && n2 != n3 && n1 != n3){
    printf("\nO triangulo eh escaleno");
}

}
else{
    printf(\n"Nao eh um triangulo");
}


}
