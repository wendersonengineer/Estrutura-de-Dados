# 🔤 Tipos de Dados

Os tipos de dados são a base da programação e das estruturas de dados. Eles definem o tipo de informação que pode ser armazenada, manipulada e processada em um programa, influenciando diretamente a eficiência e a lógica dos algoritmos.

---

## 🧩 Classificação dos Tipos de Dados

### 1. **Tipos Primitivos**

São os tipos básicos oferecidos pelas linguagens de programação:

- `int` — números inteiros (ex: 10, -3)
- `float` ou `double` — números reais com ponto flutuante (ex: 3.14, -0.5)
- `char` — caracteres individuais (ex: 'a', 'Z')
- `bool` — valores lógicos (verdadeiro ou falso)
- `string` — sequência de caracteres (ex: "Olá mundo")

Esses tipos são usados para representar dados simples e são armazenados diretamente na memória.

---

### 2. **Tipos Compostos**

São formados por uma combinação de tipos primitivos:

- **Arrays (vetores e matrizes)**: coleção de elementos do mesmo tipo, acessados por índice.
- **Structs (registros)**: agrupam diferentes tipos de dados sob um mesmo nome.
- **Strings**: em algumas linguagens, são tratadas como arrays de `char`.

---

### 3. **Tipos Abstratos de Dados (TADs)**

São modelos conceituais que definem o comportamento dos dados, independentemente da implementação:

- **Lista**: coleção ordenada de elementos.
- **Pilha (Stack)**: estrutura LIFO (último a entrar, primeiro a sair).
- **Fila (Queue)**: estrutura FIFO (primeiro a entrar, primeiro a sair).
- **Árvore**: estrutura hierárquica com nós e subnós.
- **Grafo**: conjunto de vértices conectados por arestas.
- **Tabela Hash**: estrutura que associa chaves a valores com acesso rápido.

Esses tipos são fundamentais para resolver problemas complexos e são estudados em profundidade na disciplina de Estrutura de Dados.

---

## 🧠 Tipos Estáticos vs Dinâmicos

- **Estáticos**: têm tamanho fixo e são definidos em tempo de compilação (ex: arrays em C).
- **Dinâmicos**: podem crescer ou diminuir durante a execução (ex: listas encadeadas).

---

## 📌 Exemplo em C

```c
int idade = 20;
float altura = 1.75;
char letra = 'A';
bool aprovado = true;


