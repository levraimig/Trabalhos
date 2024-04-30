#include <stdio.h>
#include <math.h>

main(){




 int n;
char periodo;
int elevador;
int elevadorA = 0;
int elevadorB = 0;
int elevadorC = 0;
int matutinho = 0;
int vespertino = 0;;
int noturno = 0;

float percentual;

printf("Insira a quantidade de pessoas que irao fazer");
scanf("%d", &n);


for(int i = 0; i <= n; i++){

    printf("Insira '1' -> Elevador A e matutinho\n");
    printf("Insira '2' -> Elevador A e vespertino\n");
    printf("Insira '3' -> Elevador A e noturno\n");
     printf("Insira '4' -> Elevador B e matutinho\n");
    printf("Insira '5' -> Elevador B e vespertino\n");
    printf("Insira '6' -> Elevador B e noturno\n");
     printf("Insira '7' -> Elevador C e matutinho\n");
    printf("Insira '8' -> Elevador C e vespertino\n");
    printf("Insira '9' -> Elevador C e noturno\n");
    scanf("%d", &elevador);

   // printf("Agora o periodo\n");

   // printf("Insira 'M' -> matutinho\n");
    //printf("Insira 'V' -> vesertino\n");
    //printf("Insira 'N' -> noturno\n");
   // scanf("%c", &periodo);

    switch(elevador){

case 1:
    elevadorA++;
    matutinho++;
    break;

case 2:
    elevadorA++;
    vespertino++;
    break;

case 3:
    elevadorA++;
    noturno++;
    break;
case 4:
    elevadorB++;
    matutinho++;
    break;

case 5:
    elevadorB++;
    vespertino++;
    break;

case 6:
    elevadorB++;
    noturno++;
    break;

case 7:
    elevadorC++;
    matutinho++;
    break;

case 8:
    elevadorC++;
    vespertino++;
    break;

case 9:
    elevadorC++;
    noturno++;
    break;
    }


    if(elevadorA > elevadorB && elevadorA > elevadorC && matutinho > vespertino && matutinho > noturno){
        printf("Elevador A eh o mais utilizado no periodo matutinho\n");
    }
    if(elevadorA > elevadorB && elevadorA > elevadorC && vespertino > matutinho && vespertino > noturno){
        printf("Elevador A eh o mais utilizado no periodo vespertino\n");
    }
    if(elevadorA > elevadorB && elevadorA > elevadorC && noturno > vespertino && noturno > matutinho){
        printf("Elevador A eh o mais utilizado no periodo noturno\n");
    }


     if(elevadorB > elevadorA && elevadorB > elevadorC && matutinho > vespertino && matutinho > noturno ){
        printf("Elevador B eh o mais utilizado no periodo matutinho\n");
    }
    if(elevadorB > elevadorA && elevadorB > elevadorC && vespertino > matutinho && vespertino > noturno){
        printf("Elevador B eh o mais utilizado no periodo vespertino\n");
    }
    if(elevadorB > elevadorA && elevadorB > elevadorC && noturno > vespertino && noturno > matutinho){
        printf("Elevador B eh o mais utilizado no periodo noturno\n");
    }




    if(elevadorC > elevadorB && elevadorC > elevadorA && matutinho > vespertino && matutinho > noturno){
        printf("Elevador C eh o mais utilizado no periodo matutinho\n");
    }else {
    printf("A quantidade eh igual");
    }
    if(elevadorC > elevadorB && elevadorC > elevadorA && vespertino > matutinho && vespertino > noturno){
        printf("Elevador C eh o mais utilizado no periodo vespertino\n");
    }
    if(elevadorC > elevadorB && elevadorC > elevadorC && noturno > vespertino && noturno > matutinho){
        printf("Elevador C eh o mais utilizado no periodo noturno\n");
    }




}










}
