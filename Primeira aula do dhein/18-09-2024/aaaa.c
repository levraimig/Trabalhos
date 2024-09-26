#include <stdio.h>

// Fun��o para verificar se um n�mero � divisor do outro
int div(int n1, int n2) {
    if (n1 > n2) {
        if (n1 % n2 == 0) // Removido o ponto e v�rgula
            return 1;
    } else {
        if (n2 % n1 == 0) // Removido o ponto e v�rgula
            return 1;
    }
    return 0;
}

// Fun��o principal
int main() {
    int a, b;
    printf("Digite dois valores: ");
    scanf("%d %d", &a, &b);

    if (div(a, b) == 1) {
        printf("Sim, um dos valores � divisor do outro.\n");
    } else {
        printf("N�o, n�o h� um valor que divida o outro.\n");
    }

    return 0; // Adicionado retorno da fun��o main
}
