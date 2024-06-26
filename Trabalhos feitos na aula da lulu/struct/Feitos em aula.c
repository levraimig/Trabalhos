#include <stdio.h>
#include<conio.h>


int main(){

struct facil{
    int num;
    char ch;
};
struct facil x1;
x1.num=2;
x1.ch='z';
printf("x1.num = %d, x1.ch = %c", x1.num, x1.ch);
getch();
printf("\n");

struct tempo{
    int horas;
    int minutos;
    int segundos;
}dia_atual={8,45,0};
printf("Hora = %d | MINUTOS = %d | SEGUNDOS = %d \n", dia_atual.horas, dia_atual.minutos, dia_atual.segundos);
getch();

struct dados{
    int a;
    int b;
}x,y;
x.a=10;
y=x; //atribui uma estrutura a outra
printf("%d,", y.a);
getch();
printf("\n");

struct entrada{
    char nome[20];
    char snome[20];
    char fone [20];
};
struct entrada lista[4]={"Luciana", "Lourega", "999537516"};

for(int i = 0; i<4; i++){
    printf("\n Digite o nome:");
    scanf("%s", lista[i].nome);
    printf("\n Digite o sobrenome:");
    scanf("%s", lista[i].snome);
    printf("\n Digite o telefone:");
    scanf("%s", lista[i].fone);
}
printf("\n");
printf("\n");

for(int i = 0; i < 4; i++){
    printf("Seu nome: %s\n", lista[i].nome);
    printf("Seu sobrenome: %s\n", lista[i].snome);
    printf("Seu telefone: %s\n", lista[i].fone);
}
getch();




}
