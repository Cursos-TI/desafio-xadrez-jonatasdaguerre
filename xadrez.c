#include <stdio.h>

// ---------------------------
// Função recursiva para a TORRE
// ---------------------------
void moverTorre(int casas) {
    if (casas <= 0)
        return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// ---------------------------
// Função recursiva para a RAINHA
// ---------------------------
void moverRainha(int casas) {
    if (casas <= 0)
        return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ---------------------------
// Função recursiva para o BISPO
// ---------------------------
void moverBispoRecursivo(int casas) {
    if (casas <= 0)
        return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// ---------------------------
// Movimento do BISPO com loops aninhados
// ---------------------------
// Loop externo: vertical (cima), Loop interno: horizontal (direita)
void moverBispoComLoops(int passosVerticais, int passosHorizontais) {
    for (int v = 0; v < passosVerticais; v++) {
        for (int h = 0; h < passosHorizontais; h++) {
            printf("Cima Direita\n");
        }
    }
}

// ---------------------------
// Movimento do CAVALO com loops aninhados complexos
// ---------------------------
// Movimento em "L": duas casas para cima e uma para a direita
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    int movimentos = 1; // Quantas vezes o Cavalo fará o movimento em L

    for (int m = 0; m < movimentos; m++) {
        int i = 0;
        while (i < 3) {
            if (i < 2) {
                printf("Cima\n");  // Duas casas para cima
            } else {
                if (i == 2) {
                    printf("Direita\n");  // Uma casa para a direita
                    break;  // Encerramos o movimento em L
                }
            }
            i++;
        }
    }

    printf("\n");
}

// ---------------------------
// Função principal
// ---------------------------
int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int passosVerticaisBispo = 2;
    int passosHorizontaisBispo = 2;

    // -------------------
    // TORRE - recursividade
    // -------------------
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // -------------------
    // BISPO - recursividade
    // -------------------
    printf("Movimento do Bispo (recursivo):\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    // -------------------
    // RAINHA - recursividade
    // -------------------
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // -------------------
    // CAVALO - loops aninhados e controle de fluxo
    // -------------------
    moverCavalo();

    // -------------------
    // BISPO - loops aninhados (vertical + horizontal)
    // -------------------
    printf("Movimento do Bispo (com loops aninhados):\n");
    moverBispoComLoops(passosVerticaisBispo, passosHorizontaisBispo);
    printf("\n");

    return 0;
}
