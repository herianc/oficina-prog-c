#include <stdio.h>

/*
Escreva um programa em C que leia uma matriz 4x4 de inteiros e calcule a soma
dos elementos da diagonal principal.
*/

#define TAM 4

int main() {
    int matriz[TAM][TAM];
    int soma = 0;

    for (int i=0; i<TAM; i++) {
        for (int j=0; j<TAM; j++) {
            printf("Posição [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i=0; i<TAM; i++) 
        soma += matriz[i][i]; //
    
    printf("A soma dos elementos da diagonal principal é: %d\n", soma);
    
    return 0;
}