#include <stdio.h>
#include <math.h>



int volume(int num){

int v;
v = num * num * num;
return v;

}

int perimetro (int num){
int p;
p = 4 * num;

return p;

}




main(){

int aresta;

printf("insira a aresta de um cubo");
scanf("%d", &aresta);

printf("\nO volume do cubo com aresta %dmetros eh %dmetros cubicos\n", aresta, volume(aresta));
printf("\nO perimetro de cada um dos seus lados eh %d metros", perimetro(aresta));

}
