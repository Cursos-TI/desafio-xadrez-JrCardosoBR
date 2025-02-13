#include <stdio.h>

#define BISPO 5
#define TORRE 5
#define RAINHA 8
#define CAVALO 2

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
    
    // Movimentação do Cavalo
    printf("\nMovimentação do Cavalo:\n"); 
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    int j = 0;
    while (j < 1) {
        printf("Esquerda\n");
        j++;
    }
     
    return 0;
}
