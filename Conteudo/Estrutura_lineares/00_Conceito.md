# 📚 Estruturas Lineares

As estruturas lineares são aquelas em que os elementos são organizados de forma sequencial, ou seja, cada item tem um antecessor e um sucessor (exceto o primeiro e o último). Elas são fundamentais na programação e aparecem em diversos algoritmos e sistemas.

---

## 🔤 Tipos de Estruturas Lineares

### 1. **Listas**

As listas armazenam elementos em sequência e permitem operações como inserção, remoção e busca. Podem ser:

- **Listas estáticas (arrays)**: tamanho fixo, acesso rápido por índice.
- **Listas dinâmicas (encadeadas)**: tamanho variável, compostas por nós ligados entre si.

#### Exemplos:
- Lista simplesmente encadeada
- Lista duplamente encadeada
- Lista circular

---

### 2. **Pilhas (Stacks)**

Funcionam com o princípio **LIFO** (Last In, First Out). O último elemento inserido é o primeiro a ser removido.

#### Operações principais:
- `push`: inserir elemento no topo
- `pop`: remover elemento do topo
- `peek`: visualizar o topo sem remover

#### Aplicações:
- Desfazer ações (Ctrl+Z)
- Avaliação de expressões matemáticas
- Navegação entre páginas (histórico)

---

### 3. **Filas (Queues)**

Funcionam com o princípio **FIFO** (First In, First Out). O primeiro elemento inserido é o primeiro a ser removido.

#### Operações principais:
- `enqueue`: inserir elemento no final
- `dequeue`: remover elemento do início
- `peek`: visualizar o primeiro elemento

#### Aplicações:
- Impressão de documentos
- Processamento de tarefas
- Algoritmos de busca em largura (BFS)

---

### 4. **Deque (Double-Ended Queue)**

Permite inserção e remoção de elementos em ambas as extremidades. Pode funcionar como pilha ou fila, dependendo da operação.

---

## 🧠 Comparação entre estruturas lineares

| Estrutura | Inserção | Remoção | Acesso Direto | Crescimento Dinâmico |
|-----------|----------|---------|----------------|-----------------------|
| Lista     | Sim      | Sim     | Sim (arrays)   | Sim (listas encadeadas) |
| Pilha     | No topo  | No topo | Não            | Sim                   |
| Fila      | No final | No início | Não           | Sim                   |
| Deque     | Ambos    | Ambos   | Não            | Sim                   |

---

## 📌 Exemplo em Python: Pilha

```python
stack = []
stack.append(10)  # push
stack.append(20)
print(stack.pop())  # pop → 20
