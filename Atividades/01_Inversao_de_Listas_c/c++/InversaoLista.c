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
    printf("\n\n");

    printf("PROCESSO DE TROCA /  POSICAO DOS INDICES :\n\n");
    for (int i = 0; i < tamanho / 2; i++) {
        printf("indice[%d] = numero (%d) com indice[%d] = numero (%d)\n  ", i, lista[i], tamanho - i - 1, lista[tamanho - i - 1] );
        temporaria = lista[i];
        lista[i] = lista[tamanho - i - 1];
        lista[tamanho - i - 1] = temporaria;
    }
    printf("\n\n");

    printf("LISTA INVERTIDA: ");
    for (int i = 0; i < tamanho; i++) {
        if (i < tamanho - 1) {
            printf("%d, ", lista[i]);
        } else {
            printf("%d\n", lista[i]);
        }
    }


    return 0;
}
