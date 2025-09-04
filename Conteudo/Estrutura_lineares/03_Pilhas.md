# 🧱 Pilhas (Stacks)

A estrutura de dados **pilha** é uma coleção ordenada de elementos que segue o princípio **LIFO** (*Last In, First Out*), ou seja, o último elemento inserido é o primeiro a ser removido. É como uma pilha de pratos: você coloca um prato no topo e retira sempre o de cima.

---

## 🔧 Operações básicas

- `push`: insere um elemento no topo da pilha
- `pop`: remove o elemento do topo
- `peek` ou `top`: retorna o elemento do topo sem removê-lo
- `isEmpty`: verifica se a pilha está vazia

---

## 📌 Exemplo em C

```c
#define MAX 100
int pilha[MAX];
int topo = -1;

void push(int valor) {
    if (topo < MAX - 1) {
        topo++;
        pilha[topo] = valor;
    }
}

int pop() {
    if (topo >= 0) {
        return pilha[topo--];
    }
    return -1; // pilha vazia
}


🧠 Aplicações de pilhas 

. Desfazer/refazer ações em editores de texto

. Navegação em páginas web (botão "voltar")

. Avaliação de expressões matemáticas

. Chamadas de funções recursivas

. Algoritmos de backtracking (como resolver labirintos)

. Verificação de balanceamento de parênteses

⚖️ Vantagens
. Simples de implementar

. Ideal para controle de fluxo e histórico

. Útil em algoritmos recursivos

⚠️ Desvantagens
. Acesso limitado (apenas o topo)

. Pode exigir controle manual de tamanho em linguagens como C