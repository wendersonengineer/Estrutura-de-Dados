#include <stdio.h>

int main() {
    // Define o tamanho da matriz
    int linhas = 2;
    int colunas = 3;

    // Declara duas matrizes de exemplo
    int matrizA[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int matrizB[2][3] = {
        {6, 5, 4},
        {3, 2, 1}
    };

    // Matriz para armazenar o resultado da soma
    int matrizSoma[2][3];

    // Soma elemento por elemento
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    // Exibe o resultado
    printf("Resultado da soma das matrizes:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matrizSoma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
