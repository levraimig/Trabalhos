#include <stdio.h>

// Função para verificar se um número é divisor do outro
int div(int n1, int n2) {
    if (n1 > n2) {
        if (n1 % n2 == 0) // Removido o ponto e vírgula
            return 1;
    } else {
        if (n2 % n1 == 0) // Removido o ponto e vírgula
            return 1;
    }
    return 0;
}

// Função principal
int main() {
    int a, b;
    printf("Digite dois valores: ");
    scanf("%d %d", &a, &b);

    if (div(a, b) == 1) {
        printf("Sim, um dos valores é divisor do outro.\n");
    } else {
        printf("Não, não há um valor que divida o outro.\n");
    }

    return 0; // Adicionado retorno da função main
}
