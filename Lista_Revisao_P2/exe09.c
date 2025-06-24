#include <stdio.h>

/*
Escreva um programa em C que leia uma matriz 3x2 e imprima os elementos da
matriz no formato de tabela.
*/

#define ROWS 3
#define COLS 2

int main() {
    int matrix[ROWS][COLS];
    
    for (int i=0; i<ROWS; i++) {
        for (int j=0; j<COLS; j++) {
            printf("Digite o elemento da [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i=0; i<ROWS; i++) {
        for (int j=0; j<COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}