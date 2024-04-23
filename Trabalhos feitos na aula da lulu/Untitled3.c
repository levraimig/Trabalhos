#include <stdio.h>
#include <math.h>

main(){

int pais_A = 5000000;
int pais_B = 7000000;
float pessoas_A;
float pessoas_B;

float porcentagem_A = 0.03;
float porcentagem_B = 0.02;
int tempo = 0;


pessoas_A = pais_A * porcentagem_A;
pessoas_B = pais_B * porcentagem_B;



    while(pais_A <= pais_B){
        pais_A += pais_A * porcentagem_A;
        pais_B += pais_B * porcentagem_B;
        tempo++;
}


printf("%d", tempo);


}
