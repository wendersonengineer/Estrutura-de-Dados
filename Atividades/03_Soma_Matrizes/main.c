#include <stdio.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("ATIVIDADE ESTRUTURA DE DADOS: IMPLEMENTE EM C/C++ UM ALGORITMO DE SOMA DE MATRIZES \n\n");
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int B[3][3] = {
        {1, 2, 3},
        {4, -5, 6},
        {7, 8, 9}
    };
    int C[3][3];

    for (int linha = 0; linha < 3; ++linha) {
        for (int coluna = 0; coluna < 3; coluna++) {
            C[linha][coluna] = A[linha][coluna] + B[linha][coluna];
        }
    }
    printf("RESULTADO DA SOMA DE MATRIZES = 'MATRIZ C (A + B)' \n\n");
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            printf("%d\t", C[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n\nOBS: O ALGOTIMO ACIMA REALIZOU A SOMA ENTRE  MATRIZ 'A' E  MATRIZ 'B', RESULTANDO  MATRIZ 'C'.\n\n");
    return 0;
}
