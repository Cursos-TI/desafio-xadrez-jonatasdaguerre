#include <stdio.h>

int main() {
    // Quantidade de casas para mover cada peça
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    // ---------------------
    // Movimento da TORRE
    // ---------------------
    // A torre se move em linha reta. Aqui, vamos movê-la 5 casas para a direita.
    printf("Movimento da Torre:\n");

    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ---------------------
    // Movimento do BISPO
    // ---------------------
    // O bispo se move na diagonal. Vamos simular o movimento 5 casas na diagonal "cima + direita".
    printf("Movimento do Bispo:\n");

    int contadorBispo = 1;
    while (contadorBispo <= movimentoBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // ---------------------
    // Movimento da RAINHA
    // ---------------------
    // A rainha pode se mover em qualquer direção. Vamos movê-la 8 casas para a esquerda.
    printf("Movimento da Rainha:\n");

    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

    return 0;
}
