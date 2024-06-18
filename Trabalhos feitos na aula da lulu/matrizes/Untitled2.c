#include <stdio.h>

int main() {
    int matriz[5][5];

    printf("Insira os valores para a matriz 5x5:\n");

    // Ler os valores da matriz
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Trocar as diagonais superior e inferior
    for(int i = 0; i < 5; i++) {
        int temp = matriz[i][i];
        matriz[i][i] = matriz[4-i][i];
        matriz[4-i][i] = temp;
    }

    // Imprimir a matriz resultante
    printf("Matriz resultante:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
