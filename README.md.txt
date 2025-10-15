# Xadrez - Movimentos Complexos

Projeto final da disciplina onde implementei movimentos de peças de xadrez usando recursividade e loops complexos.

## O que faz

O programa simula o movimento de 4 peças do xadrez:
- Torre: vai para a direita
- Bispo: movimento diagonal  
- Rainha: vai para baixo
- Cavalo: faz o movimento em L (2 pra cima, 1 pra direita)

## Como funciona

**Torre e Rainha:** usei recursividade simples, a função chama ela mesma até acabar as casas.

**Bispo:** foi mais complicado, tive que combinar recursividade com loops. O loop de fora controla quantas vezes vai subir, o de dentro quantas vezes vai para a direita.

**Cavalo:** esse foi o mais trabalhoso. Usei loops aninhados com várias variáveis pra controlar. Primeiro faz 2 movimentos pra cima, depois 1 pra direita. Usei continue e break como pedido.

## Para executar

gcc xadrez.c -o xadrez
./xadrez


## Exemplo do que aparece

=== SIMULADOR DE MOVIMENTOS DE XADREZ AVANÇADO ===

Torre - Movimento Recursivo
Direita
Direita
Direita
Direita
Direita
Torre finalizou o movimento!

Bispo - Recursividade + Loops Aninhados
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

Rainha - Movimento Recursivo
Baixo
Baixo
Baixo
Baixo
Baixo
Baixo
Rainha finalizou o movimento!

Cavalo - Loops Complexos
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


## Observações

Defini as constantes direto no código:
- TORRE_CASAS = 5
- BISPO_CASAS = 4  
- RAINHA_CASAS = 6
- CAVALO_MOVIMENTOS = 3

Tentei deixar o código bem comentado pra explicar a lógica, principalmente a parte da recursividade que ainda me confunde um pouco as vezes.

A parte mais difícil foi fazer o bispo funcionar direito com recursão e loop junto. Testei várias vezes até conseguir fazer o movimento diagonal certinho.
