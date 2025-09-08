#include <stdio.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("ATIVIDADE ESTRUTURA DE DADOS: IMPLEMENTE EM C/C++ UM ALGORITMO DE MULTIPLICA��O DE MATRIZES \n\n");
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int B[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int C[3][3];

    for (int linha = 0; linha < 3; ++linha) {
        for (int coluna = 0; coluna < 3; coluna++) {
            C[linha][coluna] = 0;
            for (int elemento = 0; elemento < 3; elemento++) {
                C[linha][coluna] += A[linha][elemento] * B[elemento][coluna];
            }
        }
    }
    printf("RESULTADO DA MULTIPLICA��O ENTRE AS MATRIZES 'A' E 'B' \n\n");

    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            printf("%4d", C[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n\nOBS: O ALGORITIMO ACIMA REALIZOU A MULTIPLICA��O ENTRE  MATRIZ 'A' COM  MATRIZ 'B' RESULTANDO NO PRODUTO 'C' .");
    return 0;
}
