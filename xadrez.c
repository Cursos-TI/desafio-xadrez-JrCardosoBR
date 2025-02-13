#include <stdio.h>

#define BISPO 5
#define TORRE 5
#define RAINHA 8

int main() {
    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < BISPO; i++) {
        printf("Diagonal Superior Direita\n");
    }

    // Movimentação da Torre
    printf("\nMovimentação da Torre:\n");
    for (int i = 0; i < TORRE; i++) {
        printf("Direita\n");
    }

    // Movimentação da Rainha
    printf("\nMovimentação da Rainha:\n");
    for (int i = 0; i < RAINHA; i++) {
        printf("Esquerda\n");
    }

    return 0;
}
