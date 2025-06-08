#include <stdlib.h>
#include <stdio.h>

/*
Exercício 3 - Elementos acima da média
Escreva um programa que leia os valores de uma matriz 4 × 4 de inteiros. Calcule
a média de todos os elementos da matriz e, em seguida, imprima todos os valores
que são maiores que essa média.
*/

#define TAM 4

int main() {
    int matriz[TAM][TAM];
    int soma = 0;
    float media = 0;

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {     
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    media = soma / (TAM * TAM);
    printf("\n\nA média da matriz é: %.2f\n", media);

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (matriz[i][j] > media)
                printf("O valor %d na posição [%d][%d] é maior que a média.\n", matriz[i][j], i, j);
        } 
    }

    return 0;
}