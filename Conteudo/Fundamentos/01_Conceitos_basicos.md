# 📘 Conceitos Básicos de Estrutura de Dados

Este documento apresenta os fundamentos essenciais para compreender o papel das estruturas de dados na programação e no desenvolvimento de software.

---

## 🧠 O que são Estruturas de Dados?

Estruturas de dados são formas organizadas de armazenar e manipular informações em um programa. Elas definem como os dados são agrupados, acessados, modificados e processados, influenciando diretamente a eficiência dos algoritmos e a qualidade do software.

> Um programa é composto por **algoritmos** e **estruturas de dados** — juntos, eles determinam como o software funciona.

---

## 🎯 Por que estudar Estrutura de Dados?

- Para escrever algoritmos mais eficientes
- Para otimizar o uso de memória e tempo de execução
- Para resolver problemas complexos com soluções organizadas
- Para entender como funcionam sistemas reais (bancos de dados, redes, jogos, etc.)

---

## 🔤 Tipos de Estruturas de Dados

As estruturas de dados podem ser classificadas em:

### 1. **Lineares**
- **Arrays (vetores)**: coleção de elementos do mesmo tipo, acessados por índice
- **Listas encadeadas**: elementos conectados por ponteiros
- **Pilhas (Stacks)**: estrutura LIFO (último a entrar, primeiro a sair)
- **Filas (Queues)**: estrutura FIFO (primeiro a entrar, primeiro a sair)

### 2. **Não Lineares**
- **Árvores**: estrutura hierárquica com nós e subnós
- **Grafos**: conjunto de vértices conectados por arestas

### 3. **Associativas**
- **Tabelas hash**: associam chaves a valores com acesso rápido
- **Dicionários**: estrutura de pares chave-valor

---

## 🧮 Operações comuns

As principais operações realizadas sobre estruturas de dados incluem:

- Inserção (`insert`)
- Remoção (`delete`)
- Busca (`search`)
- Atualização (`update`)
- Ordenação (`sort`)
- Percurso (`traverse`)

---

## 📊 Complexidade de Algoritmos

Cada estrutura de dados tem um impacto diferente na **complexidade de tempo e espaço** dos algoritmos. A análise de complexidade ajuda a escolher a melhor estrutura para cada problema.

Exemplo:  
- Buscar um elemento em um array ordenado → busca binária → complexidade O(log n)  
- Inserir em uma lista encadeada → complexidade O(1) se for no início

---

## 📌 Exemplo em Python

```python
# Lista de nomes
nomes = ["Ana", "Bruno", "Carlos"]

# Inserção
nomes.append("Daniel")

# Acesso
print(nomes[1])  # Bruno


