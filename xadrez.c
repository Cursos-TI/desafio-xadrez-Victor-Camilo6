#include <stdio.h>

int main() {
    // Constantes para número de movimentos
    const int movimentos_bispo = 5;
    const int movimentos_torre = 5;
    const int movimentos_rainha = 8;

    int i;

    // ------------------------
    // Movimentação do BISPO
    // ------------------------
    printf("=== Movimento do Bispo (Diagonal Superior Direita) ===\n");
    
    // Loop usando for
    for (i = 0; i < movimentos_bispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // ------------------------
    // Movimentação da TORRE
    // ------------------------
    printf("\n=== Movimento da Torre (Direita) ===\n");
    
    // Loop usando while
    i = 0;
    while (i < movimentos_torre) {
        printf("Direita\n");
        i++;
    }

    // ------------------------
    // Movimentação da RAINHA
    // ------------------------
    printf("\n=== Movimento da Rainha (Esquerda) ===\n");

    // Loop usando do-while
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < movimentos_rainha);

    return 0;
}

