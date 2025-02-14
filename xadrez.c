#include <stdio.h>

// Constantes para os movimentos das peças
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

// Funções recursivas para movimentação das peças
void moverBispo(int mov) {
    if (mov > 0) {
        printf("Diagonal Superior Direita\n");
        moverBispo(mov - 1);
    }
}

void moverTorre(int mov) {
    if (mov > 0) {
        printf("Direita\n");
        moverTorre(mov - 1);
    }
}

void moverRainha(int mov) {
    if (mov > 0) {
        printf("Esquerda\n");
        moverRainha(mov - 1);
    }
}

void moverCavalo() {
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Cima\n");
        }
        printf("Direita\n");

    }
}

int main() {
    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    moverBispo(BISPO_MOV);

    // Movimentação da Torre
    printf("Movimentação da Torre:\n");
    moverTorre(TORRE_MOV);

    // Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    moverRainha(RAINHA_MOV);

    // Movimentação do Cavalo
    printf("Movimentação do Cavalo:\n");
    moverCavalo();

    return 0;
}
