
# ⏱️ Complexidade Algorítmica

A complexidade algorítmica é o estudo da eficiência de um algoritmo em termos de tempo de execução e uso de memória. Ela permite comparar diferentes soluções para um mesmo problema e escolher a mais adequada para cada contexto.

---

## 🧠 Por que analisar a complexidade?

- Para prever o desempenho de um algoritmo antes de implementá-lo
- Para garantir que o programa funcione bem mesmo com grandes volumes de dados
- Para comparar diferentes abordagens e escolher a mais eficiente

---

## 📊 Tipos de complexidade

### 1. **Complexidade de tempo**
Refere-se ao número de operações executadas em função do tamanho da entrada `n`.

Exemplo:
- Buscar um elemento em um vetor ordenado → busca binária → O(log n)
- Ordenar um vetor com Bubble Sort → O(n²)

### 2. **Complexidade de espaço**
Refere-se à quantidade de memória adicional que o algoritmo precisa para funcionar.

Exemplo:
- Um algoritmo que usa uma matriz auxiliar → O(n²)
- Um algoritmo in-place (sem estruturas extras) → O(1)

---

## 🔤 Notação Big-O

A notação Big-O descreve o **comportamento assintótico** de um algoritmo — ou seja, como ele se comporta quando `n` cresce muito.

| Notação | Nome               | Desempenho típico |
|---------|--------------------|-------------------|
| O(1)    | Constante          | Muito rápido      |
| O(log n)| Logarítmica        | Excelente         |
| O(n)    | Linear             | Aceitável         |
| O(n log n)| Linearítmica     | Ótimo para ordenação |
| O(n²)   | Quadrática         | Lento para grandes entradas |
| O(2ⁿ)   | Exponencial        | Impraticável      |

---

## 🧪 Casos de análise

- **Melhor caso**: entrada ideal, menor tempo possível
- **Pior caso**: entrada mais difícil, maior tempo possível
- **Caso médio**: tempo esperado considerando entradas variadas

Exemplo:  
Busca sequencial em um vetor de `n` elementos  
- Melhor caso: O(1) (elemento está na primeira posição)  
- Pior caso: O(n) (elemento está na última ou não está)  
- Caso médio: O(n/2) → simplificado como O(n)

---

## 📌 Exemplo em Python

```python
def busca_linear(lista, valor):
    for i in range(len(lista)):
        if lista[i] == valor:
            return i
    return -1
