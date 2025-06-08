#include <stdlib.h>
#include <stdio.h>

#define TAM 2

/*
Exercício 2 - Soma dos elementos de uma matriz
Um programa deve ler os elementos de uma matriz de inteiros 3 × 3 e calcular a
soma de todos os seus elementos. Ao final, exiba a soma total.
*/

int main() {
    int matriz[TAM][TAM];
    int soma = 0;

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("A soma dos elementos da matriz é: %d\n", soma);

    return 0;
}