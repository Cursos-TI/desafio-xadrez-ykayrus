#include <stdio.h>

int main() {
    // Movimento da peça Torre, 5 casas para a direita usando for
    printf("Movimento da Torre:\n");
    // variável, condição, incremento;
    for (int torre = 0; torre <= 5; torre++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do peça bispo, 5 casas na diagonal para cima e direita usando while
    printf("Movimento do Bispo:\n");
    int bispo = 0;
    while (bispo <= 5) {
        printf("Cima, Direita\n");
        bispo++;
    }
    printf("\n");

    // Movimento da Rainha, 8 casas para a esquerda usando do-while
    printf("Movimento da Rainha:\n");
    int rainha = 0;
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);
    
    return 0;
}
