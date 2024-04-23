#include <stdio.h>
#include <math.h>

main(){

int voto1;
int voto2;
int voto3;
int voto4;
int voto5;
int cod;


float nulo, votobranco;
int total = 0;

printf("Insira alguma opcao\n");
printf("1. Candidato Jair Rodrigues\n");
printf("2. Candidato Carlos Luz\n");
printf("3. Candidato Neves Rocha\n");
printf("4. Nulo\n");
printf("5. Branco\n");
printf("Entre com o seu voto:\n");
scanf("%d", &cod);



for(int i = 0; i < 15; i++){


    switch(cod){

case 1:
    voto1++;
    total++;
    printf("%d", voto1);
    break;

case 2:
    voto2++;
    total++;
    break;

case 3:
    voto3++;
    total++;
    break;

case 4:
    voto4++;
    total++;
    break;

case 5:
    voto5++;
    total++;
    break;

    }

}


if(cod == 6){

        printf("Votos para Jair %d\n", voto1);
        printf("Votos para carlos %d\n", voto2);
        printf("Votos para Neves Rocha %d\n", voto3);
        printf("Porcentagem nulo Nulo %f\n", voto4);
        printf("Porcentagem branco %f\n", voto5);
    }
    if(voto1 > voto2 && voto1 > voto3 && voto1  > voto4 && voto1 > voto5){
        printf("Jair vencedor;");
    }
    if(voto2 > voto1 && voto2 > voto3 && voto2  > voto4 && voto2 > voto5){
        printf("Carlos vencedor;");
    }
    if(voto3 > voto2 && voto3 > voto1 && voto3  > voto4 && voto3 > voto5){
        printf("Neves vencedor;");
    }



return 0;

}
