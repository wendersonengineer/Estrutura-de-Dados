#include <stdio.h>

int main() {
    // Define dimensões das matrizes
    int linhasA = 2, colunasA = 3;
    int linhasB = 3, colunasB = 2;

    // Verifica se é possível multiplicar (colunasA == linhasB)
    if (colunasA != linhasB) {
        printf("Erro: número de colunas da matriz A deve ser igual ao número de linhas da matriz B.\n");
        return 1;
    }

    // Matriz A (2x3)
    int matrizA[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Matriz B (3x2)
    int matrizB[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    // Matriz resultado C (2x2)
    int matrizC[2][2];

    // Multiplicação de matrizes
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            matrizC[i][j] = 0;
            for (int k = 0; k < colunasA; k++) {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    // Exibe a matriz resultante
    printf("Resultado da multiplicação das matrizes:\n");
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            printf("%d\t", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
