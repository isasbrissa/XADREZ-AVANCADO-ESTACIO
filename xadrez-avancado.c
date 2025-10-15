#include <stdio.h>
#include <stdlib.h>

/* ========================================
 * CONSTANTES DE CONFIGURAÇÃO 
 * Valores definidos diretamente no código conforme requisitos
 * ========================================*/
#define TORRE_CASAS 5        // Número de casas para Torre mover recursivamente
#define BISPO_CASAS 4        // Número de casas para Bispo mover (recursão + loops)  
#define RAINHA_CASAS 6       // Número de casas para Rainha mover recursivamente
#define CAVALO_MOVIMENTOS 3  // Número de movimentos em L para Cavalo (loops complexos)

/* ========================================
 * PROTÓTIPOS DAS FUNÇÕES
 * ========================================*/
void moverTorreRecursiva(int casasRestantes);
void moverBispoRecursiva(int casasVertical, int casasHorizontal);
void moverRainhaRecursiva(int casasRestantes);
void moverCavaloComplexo(int movimentosRestantes);
void imprimirSeparador(void);

/* ========================================
 * FUNÇÃO PRINCIPAL
 * Controla a execução de todos os movimentos das peças
 * ========================================*/
int main() {
    printf("=== SIMULADOR DE MOVIMENTOS DE XADREZ AVANÇADO ===\n\n");
    
    // Torre: Implementação com recursividade pura (movimento para direita)
    printf("🏰 TORRE - Movimento Recursivo\n");
    moverTorreRecursiva(TORRE_CASAS);
    imprimirSeparador();
    
    // Bispo: Implementação híbrida - recursividade + loops aninhados (diagonal)
    printf("⛪ BISPO - Recursividade + Loops Aninhados\n");
    moverBispoRecursiva(BISPO_CASAS, 0);
    imprimirSeparador();
    
    // Rainha: Implementação com recursividade pura (movimento para baixo)
    printf("👑 RAINHA - Movimento Recursivo\n");  
    moverRainhaRecursiva(RAINHA_CASAS);
    imprimirSeparador();
    
    // Cavalo: Implementação com loops complexos e múltiplas condições (movimento em L)
    printf("🐴 CAVALO - Loops Complexos\n");
    moverCavaloComplexo(CAVALO_MOVIMENTOS);
    
    printf("\n=== FIM DA SIMULAÇÃO ===\n");
    return 0;
}

/* ========================================
 * IMPLEMENTAÇÕES DAS FUNÇÕES RECURSIVAS
 * Substituem loops simples por chamadas recursivas
 * ========================================*/

/**
 * TORRE: Função recursiva para movimentação linear
 * 
 * Técnica: Recursividade pura com caso base
 * Movimento: Linear para a direita
 * 
 * @param casasRestantes - contador decrescente para controle da recursão
 * 
 * Lógica: 
 * - Caso base: quando casasRestantes <= 0, para a recursão
 * - Caso recursivo: imprime direção e chama a si mesma com contador-1
 * - Evita stack overflow limitando o número de chamadas via constante
 */
void moverTorreRecursiva(int casasRestantes) {
    // Caso base da recursão: finaliza quando não há mais casas para mover
    if (casasRestantes <= 0) {
        printf("Torre finalizou o movimento!\n");
        return; // Interrompe a cadeia de chamadas recursivas
    }
    
    // Imprime a direção do movimento atual
    printf("Direita\n");
    
    // Chamada recursiva: decrementa contador e continua o movimento
    // Esta é a essência da recursividade - função chama a si mesma
    moverTorreRecursiva(casasRestantes - 1);
}

/**
 * BISPO: Combina recursividade (controle vertical) com loops aninhados (horizontal)
 * 
 * Técnica: Híbrida - recursão para eixo vertical + loop para eixo horizontal
 * Movimento: Diagonal (combinação de horizontal + vertical)
 * 
 * @param casasVertical - controla recursão (quantas "linhas" diagonais restam)
 * @param casasHorizontal - controla loop interno (quantos movimentos direita por linha)
 * 
 * Lógica dos loops aninhados:
 * - Loop EXTERNO: controlado pela recursão (vertical)
 * - Loop INTERNO: controlado por for tradicional (horizontal)
 * - A cada nível recursivo, aumenta movimentos horizontais (efeito diagonal)
 */
void moverBispoRecursiva(int casasVertical, int casasHorizontal) {
    // Caso base da recursão: quando acabam as casas verticais
    if (casasVertical <= 0) {
        printf("Bispo finalizou o movimento diagonal!\n");
        return;
    }
    
    // LOOP ANINHADO INTERNO: movimento horizontal
    // Este é o loop "mais interno" conforme requisito
    // Executa movimentos horizontais proporcionais ao nível diagonal
    for (int horizontal = 0; horizontal <= casasHorizontal; horizontal++) {
        printf("Direita\n");
    }
    
    // Movimento vertical após completar sequência horizontal
    printf("Cima\n");
    
    // RECURSÃO: controla o loop "mais externo" (vertical)
    // Decrementa vertical, incrementa horizontal -> cria padrão diagonal
    moverBispoRecursiva(casasVertical - 1, casasHorizontal + 1);
}

/**
 * RAINHA: Função recursiva para movimentação linear oposta à Torre
 * 
 * Técnica: Recursividade pura (similar à Torre)
 * Movimento: Linear para baixo
 * 
 * @param casasRestantes - contador para controle recursivo
 * 
 * Diferença da Torre: direção do movimento (Baixo vs Direita)
 */
void moverRainhaRecursiva(int casasRestantes) {
    // Caso base: interrompe recursão quando contador zera
    if (casasRestantes <= 0) {
        printf("Rainha finalizou o movimento!\n");
        return;
    }
    
    // Movimento da Rainha: para baixo (oposto à Torre)
    printf("Baixo\n");
    
    // Chamada recursiva com decremento
    moverRainhaRecursiva(casasRestantes - 1);
}

/* ========================================
 * IMPLEMENTAÇÃO DE LOOPS COMPLEXOS
 * Utiliza múltiplas variáveis e condições de controle
 * ========================================*/

/**
 * CAVALO: Loops aninhados com múltiplas variáveis e condições complexas
 * 
 * Técnica: Loops aninhados + múltiplas variáveis + continue/break
 * Movimento: Em "L" (2 casas cima + 1 casa direita)
 * 
 * @param movimentosRestantes - quantos movimentos em L executar
 * 
 * Características dos loops complexos implementados:
 * - Múltiplas variáveis de controle (movimento, passo, movimentosCompletos)
 * - Condições aninhadas com if/else
 * - Uso de continue para pular iterações
 * - Uso de break para sair de loops antecipadamente
 * - Loop externo controla quantidade de movimentos L
 * - Loop interno controla cada passo dentro do L (2 cima + 1 direita)
 */
void moverCavaloComplexo(int movimentosRestantes) {
    // Múltiplas variáveis de controle conforme requisito
    int movimentosCompletos = 0;  // Contador de L's completados
    int passoAtual = 0;           // Controla passo atual dentro do L
    
    // LOOP EXTERNO: controla quantos movimentos em L serão executados
    for (int movimento = 1; movimento <= movimentosRestantes; movimento++) {
        
        printf("--- Movimento %d em L ---\n", movimento);
        
        // LOOP INTERNO COMPLEXO: executa um movimento em L completo
        // Utiliza múltiplas variáveis e condições para controle fino
        for (int passo = 1; passo <= 3; passo++) {
            passoAtual = passo; // Atualiza variável de controle
            
            // CONDIÇÃO COMPLEXA 1: primeiros dois passos são verticais
            if (passoAtual <= 2) {
                // DEMONSTRAÇÃO DE USO DO CONTINUE
                // Exemplo de condição específica para controle de fluxo
                if (passoAtual == 1 && movimento == 1) {
                    printf("Cima\n");
                    continue; // Pula para próxima iteração do loop interno
                }
                printf("Cima\n");
            } 
            // CONDIÇÃO COMPLEXA 2: terceiro passo é horizontal  
            else if (passoAtual == 3) {
                printf("Direita\n");
                movimentosCompletos++; // Incrementa contador
                
                // DEMONSTRAÇÃO DE USO DO BREAK
                // Condição de saída antecipada com break
                if (movimentosCompletos >= movimentosRestantes) {
                    break; // Sai do loop interno
                }
            }
        }
        
        // CONTROLE ADICIONAL: verifica se deve continuar loop externo
        if (movimentosCompletos >= movimentosRestantes) {
            break; // Sai do loop externo também
        }
    }
    
    printf("Cavalo finalizou %d movimentos em L!\n", movimentosCompletos);
}

/* ========================================
 * FUNÇÃO UTILITÁRIA
 * Melhora legibilidade da saída conforme requisitos
 * ========================================*/

/**
 * Função auxiliar para separar visualmente saídas das diferentes peças
 * Utiliza linha em branco conforme especificado nos requisitos
 */
void imprimirSeparador(void) {
    printf("\n"); // Linha em branco entre peças
}