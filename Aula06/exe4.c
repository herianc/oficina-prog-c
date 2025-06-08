#include <stdlib.h>
#include <stdio.h>


/*
Exercício 4 - Verificação de simetria em matriz quadrada
Faça um programa que leia os valores de uma matriz 3 × 3 de inteiros e verifique se
ela é simétrica. Uma matriz é simétrica se os elementos da posição [i][j] forem
iguais aos da posição [j][i] para todos os i e j. Imprima uma mensagem indicando
se a matriz é ou não simétrica.
*/

#define TAM 3
#define TRUE 1
#define FALSE 0

int main() { 
    int matriz[TAM][TAM];


    for (int i=0; i < TAM; i++) {
        for (int j=0; j < TAM; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int simetrico = TRUE; //Bool 

    for (int i=0; i < TAM; i++) {
        for (int j=0; j < TAM; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                simetrico = FALSE;
                break;
            }
        }
    }

    if (simetrico) 
        printf("A matriz é simétrica.\n");
    else {
        printf("A matriz não é simétrica.\n");
    }

    return 0;
}