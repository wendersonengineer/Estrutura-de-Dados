# 🌳 Trabalho P1 — Estrutura de Dados: Tipos de Árvores

Este repositório reúne as implementações e explicações dos principais tipos de árvores estudados na disciplina **Estrutura de Dados**. O objetivo do trabalho é compreender a estrutura, funcionamento e aplicação de diferentes modelos de árvores utilizadas em algoritmos e sistemas computacionais.

---

## 📘 Conteúdo do Trabalho

O trabalho contempla os seguintes tipos de árvores:

### 1. 🌿 Árvores Binárias de Busca (BST)
Estrutura onde cada nó possui até dois filhos. Os valores à esquerda são menores e os à direita são maiores que o valor do nó atual. Utilizadas em buscas, ordenações e navegação hierárquica.

### 2. 🌲 Árvores AVL
Árvores binárias balanceadas que mantêm o fator de equilíbrio entre subárvores. Garantem operações de busca, inserção e remoção em tempo logarítmico.

### 3. 🔴⚫ Árvores Rubro-Negras
Árvores binárias balanceadas com regras de coloração que mantêm o equilíbrio. Muito utilizadas em bibliotecas padrão como `TreeMap` e `Set`.

### 4. 🔤 Árvores Digitais (Tries ou Árvores de Prefixos)
Estruturas especializadas para armazenar strings e prefixos. Muito eficientes em buscas por palavras, autocomplete e dicionários.

### 5. 🧩 Árvores de Huffman
Utilizadas em algoritmos de compressão de dados. Baseadas em frequências de ocorrência para gerar códigos binários otimizados.

---

## 📂 Organização dos Arquivos

```plaintext
Trabalho_P1_Arvores/
├── Arvore_Binaria/
│   └── arvore_binaria.c
├── Arvore_AVL/
│   └── arvore_avl.c
├── Arvore_Rubro_Negra/
│   └── arvore_rubro_negra.c
├── Arvore_Digital/
│   └── arvore_trie.c
├── Arvore_Huffman/
│   └── arvore_huffman.c
└── README.md


▶️ Como compilar e executar

Usando Code::Blocks:
1 - Crie um novo projeto do tipo Console Application

2 - Cole o código no arquivo main.c

3 - Compile e execute com Build & Run

🎯 Objetivos Acadêmicos
. Compreender diferentes estruturas de árvores

. Implementar algoritmos de inserção, busca e remoção

. Aplicar conceitos de balanceamento, compressão e otimização

. Comparar desempenho e aplicabilidade de cada tipo

🏫 Informações Acadêmicas

Curso: Engenharia de Software 
Instituição: Univassouras 
Período: 3º Professor: [André Saraiva]

📎 Licença
Este projeto é de uso acadêmico e pode ser reutilizado para fins educacionais. Sinta-se livre para adaptar, expandir e contribuir.