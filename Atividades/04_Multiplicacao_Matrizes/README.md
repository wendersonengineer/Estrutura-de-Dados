📘 Atividade: Multiplicação de Matrizes em C

Disciplina: Estrutura de Dados 
Aluno: Wenderson Santos
Professor(a): André Saraiva
Instituição: Univassouras

---

🎯 Objetivo

Desenvolver um algoritmo em linguagem C que realiza a multiplicação de duas matrizes 3x3 previamente definidas. A atividade tem como foco o uso de arrays bidimensionais, laços de repetição aninhados e lógica de multiplicação matricial.

---

🧠 Conceitos Aplicados

Matrizes fixas (A, B) e matriz resultado (C)
Multiplicação de matrizes: Cada elemento da matriz C[i][j] é calculado pela soma dos produtos dos elementos correspondentes da linha i da matriz A com a coluna j da matriz B.

Laços for aninhados

Uso de setlocale para permitir acentuação correta no terminal

---

💻 Código da Atividade

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("ATIVIDADE ESTRUTURA DE DADOS: IMPLEMENTE EM C/C++ UM ALGORITMO DE MULTIPLICAÇÃO DE MATRIZES \n\n");

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

    printf("RESULTADO DA MULTIPLICAÇÃO ENTRE AS MATRIZES 'A' E 'B' \n\n");

    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            printf("%4d", C[linha][coluna]);
        }
        printf("\n");
    }

    printf("\n\nOBS: O ALGORITMO ACIMA REALIZOU A MULTIPLICAÇÃO ENTRE MATRIZ 'A' COM MATRIZ 'B' RESULTANDO NO PRODUTO 'C'.\n");
    return 0;
}

---

📊 Saída Esperada

Com os valores definidos nas matrizes A e B, o programa exibirá:

Código
RESULTADO DA MULTIPLICAÇÃO ENTRE AS MATRIZES 'A' E 'B'

 30  36  42
 66  81  96
102 126 150

OBS: O ALGORITMO ACIMA REALIZOU A MULTIPLICAÇÃO ENTRE MATRIZ 'A' COM MATRIZ 'B' RESULTANDO NO PRODUTO 'C'.

---

📝 Observações

. As matrizes são fixas e já estão declaradas no código.

. O algoritmo segue a regra clássica da multiplicação de matrizes quadradas.

. O uso de setlocale garante que os textos com acentuação sejam exibidos corretamente no terminal.