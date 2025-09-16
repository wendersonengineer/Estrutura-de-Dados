#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


unsigned long long fatorial(int n) {
    if (n < 0) return 0;

    unsigned long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero;
    printf("== Calculadora de Fatorial ==\n\n");
    printf("Digite -1 para sair.\n\n");

    while (1){
        printf("Digite um número inteiro positivo: \n");
        scanf("%d", &numero);

        if (numero == -1){
            printf("Encerrando o programa...\n");
            break;
        }

        if (numero < 0)
            printf("Fatorial não é definido para números negativos.\n\n");
        else
            printf("Fatorial de %d é %llu\n", numero, fatorial(numero));
            printf("\n");
    }

    return 0;

}
