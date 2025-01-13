#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Declaração do tabuleiro 5x5
    int tabuleiro[5][5] = {0}; 

    // Posicionamento do primeiro navio (orientação horizontal)
    int navioHorizontalX = 1, navioHorizontalY = 0; // Coordenada inicial do navio
    for (int i = 0; i < 3; i++) {
        tabuleiro[navioHorizontalX][navioHorizontalY + i] = 1; // Marca as casas do navio como ocupadas
    }

    // Exibindo as coordenadas das partes do navio horizontal
    printf("Coordenadas do Navio Horizontal:\n");
    for (int i = 0; i < 3; i++) {
        printf("Parte do navio posicionado na casa (%d, %d)\n", navioHorizontalX, navioHorizontalY + i);
    }
    printf("\n");

    // Posicionamento do segundo navio (orientação vertical)
    int navioVerticalX = 3, navioVerticalY = 4; // Coordenada inicial do navio
    for (int i = 0; i < 3; i++) {
        tabuleiro[navioVerticalX + i][navioVerticalY] = 1; // Marca as casas do navio como ocupadas
    }

    // Exibindo as coordenadas das partes do navio vertical
    printf("Coordenadas do Navio Vertical:\n");
    for (int i = 0; i < 3; i++) {
        printf("Parte do navio posicionado na casa (%d, %d)\n", navioVerticalX + i, navioVerticalY);
    }
    printf("\n");

    return 0;
}
