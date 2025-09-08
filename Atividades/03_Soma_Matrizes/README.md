## 📘 Atividade: Soma de Matrizes em C

Aluno: Wenderson Santos
Professor: André Saraiva
Instituição: Univassouras - Saquarema -RJ
---
## 🎯 Objetivo

Desenvolver um algoritmo em linguagem C que realiza a soma de duas matrizes 3x3 previamente definidas no código. A atividade tem como foco o uso de arrays bidimensionais, laços de repetição e boas práticas de formatação de saída.
---
## 🧠 Conceitos Aplicados

. Arrays bidimensionais (int A[3][3], int B[3][3], int C[3][3])
. Laços for aninhados
. Operações entre estruturas
. Uso da função setlocale para exibir acentuação corretamente
---
## 💻 Código da Atividade
```c
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

    printf("\n\nOBS: O ALGORITMO ACIMA REALIZOU A SOMA ENTRE MATRIZ 'A' COM MATRIZ 'B' RESULTANDO NA MATRIZ 'C'.\n\n");
    return 0;
}
...
📊 Saída Esperada

Com os valores definidos nas matrizes A e B, o programa exibirá:
Código

RESULTADO DA SOMA DE MATRIZES = 'MATRIZ C (A + B)'
2   4   6   
8   0   12  
14  16  18  

OBS: O ALGORITMO ACIMA REALIZOU A SOMA ENTRE MATRIZ 'A' COM MATRIZ 'B' RESULTANDO NA MATRIZ 'C'.

📝 Observações

. As matrizes são fixas e já estão declaradas no código.
. O uso de setlocale permite que mensagens com acentos sejam exibidas corretamente no terminal.
. O programa não solicita entrada do usuário, o que facilita testes e validação rápida.