# 🚶‍♂️ Filas (Queues)

A estrutura de dados **fila** é uma coleção ordenada de elementos que segue o princípio **FIFO** (*First In, First Out*), ou seja, o primeiro elemento inserido é o primeiro a ser removido. É como uma fila de pessoas: quem chega primeiro é atendido primeiro.

---

## 🔧 Operações básicas

- `enqueue`: insere um elemento no final da fila
- `dequeue`: remove o elemento do início da fila
- `peek` ou `front`: retorna o primeiro elemento sem removê-lo
- `isEmpty`: verifica se a fila está vazia
- `isFull`: verifica se a fila está cheia (em implementações estáticas)

---

## 📌 Exemplo em C (fila estática com vetor)

```c
#define MAX 100
int fila[MAX];
int inicio = 0, fim = 0;

void enqueue(int valor) {
    if (fim < MAX) {
        fila[fim++] = valor;
    }
}

int dequeue() {
    if (inicio < fim) {
        return fila[inicio++];
    }
    return -1; // fila vazia
}


🔁 Variações de filas
1. Fila circular
Permite reutilizar posições já liberadas, evitando deslocamentos desnecessários.

2. Deque (Double-Ended Queue)
Permite inserção e remoção em ambas as extremidades.

3. Fila de prioridade
Cada elemento tem uma prioridade, e o elemento com maior prioridade é atendido primeiro.

🧠 Aplicações
. Impressão de documentos

. Processamento de tarefas em sistemas operacionais

. Algoritmos de busca em largura (BFS)

. Controle de chamadas em call centers

. Fila de mensagens em redes e sistemas distribuídos

⚖️ Vantagens
. Simples de implementar

. Ideal para processamento sequencial

. Útil em sistemas que exigem ordem de chegada

⚠️ Desvantagens
. Acesso limitado (somente início e fim)

. Pode exigir controle de espaço em implementações estáticas