#include <stdio.h>

int main() {
    // ---------------------
    // Variáveis de movimento
    // ---------------------
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    // ---------------------
    // Movimento da TORRE (FOR)
    // ---------------------
    // A torre se move 5 casas para a direita.
    printf("Movimento da Torre:\n");

    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ---------------------
    // Movimento do BISPO (WHILE)
    // ---------------------
    // O bispo se move 5 casas na diagonal: "Cima Direita".
    printf("Movimento do Bispo:\n");

    int contadorBispo = 1;
    while (contadorBispo <= movimentoBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // ---------------------
    // Movimento da RAINHA (DO-WHILE)
    // ---------------------
    // A rainha se move 8 casas para a esquerda.
    printf("Movimento da Rainha:\n");

    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

    printf("\n");

    // ---------------------
    // Movimento do CAVALO (FOR + WHILE ANINHADO)
    // ---------------------
    // O cavalo se move em "L": duas casas para baixo e uma para a esquerda.
    printf("Movimento do Cavalo:\n");

    // O loop FOR será usado para controlar quantas vezes o Cavalo realiza o movimento "L".
    // Para este exemplo, faremos o movimento "L" apenas uma vez.
    int quantidadeMovimentosCavalo = 1;

    for (int i = 0; i < quantidadeMovimentosCavalo; i++) {
        // Primeiro loop interno (WHILE): duas casas para baixo
        int passosBaixo = 0;
        while (passosBaixo < 2) {
            printf("Baixo\n");
            passosBaixo++;
        }

        // Depois uma casa para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}
