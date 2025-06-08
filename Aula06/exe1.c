#include <stdlib.h>
#include <stdio.h>

#define ROWS 3
#define COLS 2

/*
Exercício 1 - Preenchimento e impressão de matriz
Escreva um programa em linguagem C que leia os elementos de uma matriz de
inteiros de tamanho 3 × 2 e imprima os valores organizados em formato de matriz
(linhas e colunas).
*/

int main() {

    int matriz[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz preenchida:\n");

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}