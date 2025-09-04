# 📋 Listas Simplesmente Encadeadas

As listas simplesmente encadeadas são estruturas lineares dinâmicas compostas por nós que armazenam dados e apontam para o próximo elemento da lista. Elas são ideais quando o tamanho da lista pode variar durante a execução do programa.

---

## 🧠 Conceito

Uma **lista simplesmente encadeada** é formada por uma sequência de nós, onde cada nó contém:

- Um **valor** (dado)
- Um **ponteiro** para o próximo nó

O último nó aponta para `null`, indicando o fim da lista.

---

## 📌 Estrutura de um nó (em C)

```c
typedef struct No {
    int dado;
    struct No* proximo;
} No;



🔧 Operações básicas
1. Inserção no início

No* inserir_inicio(No* lista, int valor) {
    No* novo = malloc(sizeof(No));
    novo->dado = valor;
    novo->proximo = lista;
    return novo;
}


2. Remoção do início

No* remover_inicio(No* lista) {
    if (lista == NULL) return NULL;
    No* temp = lista;
    lista = lista->proximo;
    free(temp);
    return lista;
}


3. Percorrer a lista

void imprimir_lista(No* lista) {
    while (lista != NULL) {
        printf("%d -> ", lista->dado);
        lista = lista->proximo;
    }
    printf("NULL\n");
}


🔍 Vantagens
Crescimento dinâmico (sem tamanho fixo)

Inserção e remoção eficientes no início

Uso eficiente de memória

⚠️ Desvantagens
Acesso sequencial (não é possível acessar diretamente um elemento pelo índice)

Mais complexa que arrays para implementar

🧪 Aplicações
. Implementação de pilhas e filas

. Manipulação de listas de tarefas

. Estruturas auxiliares em algoritmos de grafos


