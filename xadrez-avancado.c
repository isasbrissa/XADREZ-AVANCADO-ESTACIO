#include <stdio.h>
#include <stdlib.h>

// Constantes pro número de movimentos
#define TORRE_CASAS 5        
#define BISPO_CASAS 4        
#define RAINHA_CASAS 6       
#define CAVALO_MOVIMENTOS 3  

// Prototipos das funções
void moverTorreRecursiva(int casasRestantes);
void moverBispoRecursiva(int casasVertical, int casasHorizontal);
void moverRainhaRecursiva(int casasRestantes);
void moverCavaloComplexo(int movimentosRestantes);
void imprimirSeparador(void);

int main() {
    printf("=== SIMULADOR DE MOVIMENTOS DE XADREZ AVANÇADO ===\n\n");
    
    // Torre com recursividade
    printf("Torre - Movimento Recursivo\n");
    moverTorreRecursiva(TORRE_CASAS);
    imprimirSeparador();
    
    // Bispo com recursão + loops aninhados
    printf("Bispo - Recursividade + Loops Aninhados\n");
    moverBispoRecursiva(BISPO_CASAS, 0);
    imprimirSeparador();
    
    // Rainha com recursividade
    printf("Rainha - Movimento Recursivo\n");  
    moverRainhaRecursiva(RAINHA_CASAS);
    imprimirSeparador();
    
    // Cavalo com loops complexos
    printf("Cavalo - Loops Complexos\n");
    moverCavaloComplexo(CAVALO_MOVIMENTOS);
    
    printf("\n=== FIM DA SIMULAÇÃO ===\n");
    return 0;
}

// Função recursiva da Torre - vai para direita
void moverTorreRecursiva(int casasRestantes) {
    // Para a recursão quando não tem mais casas
    if (casasRestantes <= 0) {
        printf("Torre finalizou o movimento!\n");
        return;
    }
    
    printf("Direita\n");
    
    // Chama a função de novo com uma casa a menos
    moverTorreRecursiva(casasRestantes - 1);
}

// Bispo - recursão + loop aninhado pro movimento diagonal
void moverBispoRecursiva(int casasVertical, int casasHorizontal) {
    // Para quando acabam as casas verticais
    if (casasVertical <= 0) {
        printf("Bispo finalizou o movimento diagonal!\n");
        return;
    }
    
    // Loop interno - movimento horizontal
    // Aumenta a cada nivel pra fazer diagonal
    for (int horizontal = 0; horizontal <= casasHorizontal; horizontal++) {
        printf("Direita\n");
    }
    
    // Depois vai pra cima
    printf("Cima\n");
    
    // Chamada recursiva - diminui vertical e aumenta horizontal
    moverBispoRecursiva(casasVertical - 1, casasHorizontal + 1);
}

// Rainha - recursiva igual torre mas vai pra baixo
void moverRainhaRecursiva(int casasRestantes) {
    if (casasRestantes <= 0) {
        printf("Rainha finalizou o movimento!\n");
        return;
    }
    
    printf("Baixo\n");
    
    // Recursão
    moverRainhaRecursiva(casasRestantes - 1);
}

// Cavalo - loops complexos pro movimento em L
void moverCavaloComplexo(int movimentosRestantes) {
    int movimentosCompletos = 0;
    int passoAtual = 0;
    
    // Loop de fora - controla quantos L's
    for (int movimento = 1; movimento <= movimentosRestantes; movimento++) {
        
        printf("--- Movimento %d em L ---\n", movimento);
        
        // Loop de dentro - cada passo do L (3 passos total)
        for (int passo = 1; passo <= 3; passo++) {
            passoAtual = passo;
            
            // Primeiros 2 passos - pra cima
            if (passoAtual <= 2) {
                // Usei continue aqui como pedido
                if (passoAtual == 1 && movimento == 1) {
                    printf("Cima\n");
                    continue;
                }
                printf("Cima\n");
            } 
            // Terceiro passo - pra direita
            else if (passoAtual == 3) {
                printf("Direita\n");
                movimentosCompletos++;
                
                // Break pra sair se terminou
                if (movimentosCompletos >= movimentosRestantes) {
                    break;
                }
            }
        }
        
        // Mais um break pro loop externo
        if (movimentosCompletos >= movimentosRestantes) {
            break;
        }
    }
    
    printf("Cavalo finalizou %d movimentos em L!\n", movimentosCompletos);
}

// Função pra deixar espaço entre as peças
void imprimirSeparador(void) {
    printf("\n");
}
