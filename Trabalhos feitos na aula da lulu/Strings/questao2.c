//Um teste composto por dez quest�es foi proposto a um aluno. Cada quest�o admite as
//alternativas identificadas pelas letras A, B, C, D e E. Voc� dever� solicitar antes de tudo o
//gabarito do teste, que dever� ser armazenado em uma matriz string. Solicite as respostas para
//cada quest�o e guarde-as em uma matriz string. Voc� dever� desenvolver um algoritmo que
//seja capaz de escrever a quantidade de acertos que o aluno obteve.

#include <stdio.h>

main(){

    char respostas[10];
    char letras[5] = {'A', 'B', 'C', 'D', 'E'};
    char gabarito[10];
    int acertos = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o gabarito para a questao '%d'\n", i+1);
        scanf("%s", &gabarito[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("Digite as respostas do aluno para a questao '%d'\n", i+1);
        scanf("%s", &respostas[i]);
    }
    for(int i = 0; i < 10; i++){
        if(respostas[i] == gabarito[i]){
                acertos++;
        }
    }
    printf("voce acertou '%d'", acertos);


}
