# 🔄 Atividade: Inversão de Lista em C

Este projeto apresenta uma atividade prática da disciplina **Estrutura de Dados**, desenvolvida no curso de Engenharia de Software da Univassouras. O objetivo é implementar um algoritmo em linguagem C que **inverte os elementos de uma lista**, exibindo o processo de troca entre os índices.

---

## 📌 Objetivo

- Trabalhar com vetores (arrays)
- Aplicar laços de repetição
- Realizar trocas de valores com variável auxiliar
- Exibir o processo de inversão passo a passo

---

## 🧠 Descrição do algoritmo

1. Um vetor com 10 elementos é declarado com valores decrescentes.
2. O programa exibe a lista original.
3. Um laço percorre metade da lista, trocando os elementos das extremidades.
4. Durante o processo, o programa imprime os pares de índices que estão sendo trocados.
5. Ao final, a lista invertida é exibida.

---

## 💻 Código-fonte

```c
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("ATIVIDADE ESTRUTURA DE DADOS: INVERSAO DE LISTA\n\n");
    int lista[] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    printf("TAMANHO DA LISTA: %d elementos.\n\n", tamanho);

    printf("LISTA ORIGINAL: ");
    for (int i = 0; i < tamanho; i++) {
        if (i < tamanho - 1) {
            printf("%d, ", lista[i]);
        } else {
            printf("%d\n", lista[i]);
        }
    }

    int temporaria;
    printf("\n\nPROCESSO DE TROCA /  POSICAO DOS INDICES:\n\n");
    for (int i = 0; i < tamanho / 2; i++) {
        printf("indice[%d] = numero (%d) com indice[%d] = numero (%d)\n  ",
               i, lista[i], tamanho - i - 1, lista[tamanho - i - 1]);
        temporaria = lista[i];
        lista[i] = lista[tamanho - i - 1];
        lista[tamanho - i - 1] = temporaria;
    }

    printf("\n\nLISTA INVERTIDA: ");
    for (int i = 0; i < tamanho; i++) {
        if (i < tamanho - 1) {
            printf("%d, ", lista[i]);
        } else {
            printf("%d\n", lista[i]);
        }
    }

    return 0;
}


▶️ Como compilar e executar:

Usando Code::Blocks:

1 - Crie um novo projeto do tipo Console Application

2 - Cole o código no arquivo main.c

3 - Compile e execute com Build & Run

📊 Saída esperada

ATIVIDADE ESTRUTURA DE DADOS: INVERSAO DE LISTA

TAMANHO DA LISTA: 10 elementos.

LISTA ORIGINAL: 100, 90, 80, 70, 60, 50, 40, 30, 20, 10

PROCESSO DE TROCA /  POSICAO DOS INDICES:

indice[0] = numero (100) com indice[9] = numero (10)
indice[1] = numero (90) com indice[8] = numero (20)
...

LISTA INVERTIDA: 10, 20, 30, 40, 50, 60, 70, 80, 90, 100

🏫 Disciplina
Estrutura de Dados 
Curso: Engenharia de Software 
Instituição: Univassouras Período: 3º

📎 Licença
Este projeto é de uso acadêmico e pode ser reutilizado para fins educacionais. Sinta-se livre para adaptar e expandir.