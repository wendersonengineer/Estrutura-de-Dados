# 🔁 Listas Duplamente Encadeadas

As listas duplamente encadeadas são estruturas lineares dinâmicas em que cada nó possui dois ponteiros: um para o próximo elemento e outro para o anterior. Isso permite percorrer a lista em ambas as direções, oferecendo mais flexibilidade em operações de inserção e remoção.

---

## 🧠 Estrutura de um nó

Cada nó contém:

- Um campo de **dados**
- Um ponteiro para o **próximo** nó
- Um ponteiro para o **anterior** nó

---

## 📌 Exemplo em C

```c
typedef struct No {
    int dado;
    struct No* anterior;
    struct No* proximo;
} No;


🔧 Operações básicas
1. Inserção no início

No* inserir_inicio(No* lista, int valor) {
    No* novo = malloc(sizeof(No));
    novo->dado = valor;
    novo->anterior = NULL;
    novo->proximo = lista;
    if (lista != NULL) {
        lista->anterior = novo;
    }
    return novo;
}


2. Remoção de um nó específico

No* remover(No* lista, int valor) {
    No* atual = lista;
    while (atual != NULL && atual->dado != valor) {
        atual = atual->proximo;
    }
    if (atual == NULL) return lista;

    if (atual->anterior != NULL)
        atual->anterior->proximo = atual->proximo;
    else
        lista = atual->proximo;

    if (atual->proximo != NULL)
        atual->proximo->anterior = atual->anterior;

    free(atual);
    return lista;
}


🔍 Vantagens
Permite percorrer a lista em ambos os sentidos

Facilita remoção de elementos intermediários

Mais flexível que listas simplesmente encadeadas

⚠️ Desvantagens
Ocupa mais memória (dois ponteiros por nó)

Mais complexa para implementar e manter

🧪 Aplicações
. Navegação em histórico (voltar e avançar)

. Manipulação de editores de texto

. Implementação de deques (filas de duas extremidades)