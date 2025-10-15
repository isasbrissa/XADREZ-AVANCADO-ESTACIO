# ♞ Xadrez - Movimentos Complexos

Simulador avançado de movimentos de peças de xadrez implementando técnicas de recursividade e loops complexos para o desafio final de programação em C.

## 🎯 Objetivo

Demonstrar o uso de técnicas avançadas de programação em C:
- **Recursividade** para Torre, Bispo e Rainha
- **Loops complexos** com múltiplas condições para o Cavalo
- **Loops aninhados** combinados com recursividade para o Bispo

## 🔧 Funcionalidades Implementadas

### 🏰 Torre
- **Técnica:** Recursividade pura
- **Movimento:** Linear para a direita
- **Implementação:** Função recursiva com caso base controlado

### ⛪ Bispo  
- **Técnica:** Recursividade + Loops aninhados
- **Movimento:** Diagonal (combinação de horizontal e vertical)
- **Implementação:** Loop externo recursivo (vertical) + loop interno (horizontal)

### 👑 Rainha
- **Técnica:** Recursividade pura
- **Movimento:** Linear para baixo
- **Implementação:** Função recursiva similar à Torre, direção oposta

### 🐴 Cavalo
- **Técnica:** Loops complexos com múltiplas variáveis
- **Movimento:** Em "L" (2 casas para cima + 1 para direita)
- **Implementação:** Loops aninhados com `continue`, `break` e múltiplas condições

## ⚙️ Especificações Técnicas

- **Linguagem:** C (ANSI C99)
- **Compilador:** GCC
- **Estruturas:** Recursividade, loops aninhados, controle de fluxo
- **Saídas:** `printf("Cima\n")`, `printf("Baixo\n")`, `printf("Esquerda\n")`, `printf("Direita\n")`

## 🚀 Como executar

### Compilando
gcc xadrez.c -o xadrez

text

### Executando
./xadrez

text

## 📊 Exemplo de Saída

=== SIMULADOR DE MOVIMENTOS DE XADREZ AVANÇADO ===

🏰 TORRE - Movimento Recursivo
Direita
Direita
Direita
Direita
Direita
Torre finalizou o movimento!

⛪ BISPO - Recursividade + Loops Aninhados
Direita
Cima
Direita
Direita
Cima
Direita
Direita
Direita
Cima
Bispo finalizou o movimento diagonal!

👑 RAINHA - Movimento Recursivo
Baixo
Baixo
Baixo
Baixo
Baixo
Baixo
Rainha finalizou o movimento!

🐴 CAVALO - Loops Complexos
--- Movimento 1 em L ---
Cima
Cima
Direita
--- Movimento 2 em L ---
Cima
Cima
Direita
--- Movimento 3 em L ---
Cima
Cima
Direita
Cavalo finalizou 3 movimentos em L!

=== FIM DA SIMULAÇÃO ===

text

## 🏗️ Arquitetura do Código

- **Constantes:** Configuração de movimentos por peça
- **Funções Recursivas:** Torre, Bispo e Rainha
- **Loops Complexos:** Cavalo com múltiplos controles
- **Documentação:** Comentários detalhados explicando cada técnica
- **Modularidade:** Funções especializadas para cada peça

## 📚 Conceitos Aplicados

- ✅ Recursividade com casos base
- ✅ Loops aninhados (`for` dentro de `for`)  
- ✅ Controle de fluxo (`continue`, `break`)
- ✅ Múltiplas variáveis de controle
- ✅ Prevenção de stack overflow
- ✅ Código bem documentado e legível

---

**Desenvolvido para:** Estácio - Algoritmos e Programação Estruturada  
**Nível:** Mestre - Desafio Final  
**Técnicas:** Recursividade + Loops Complexos