#include <stdio.h>

/*
Exercício 1 - Média de Temperaturas

Escreva um programa que leia as temperaturas dos 7 dias da semana e armazene em um
vetor. Em seguida, calcule e imprima a média semanal das temperaturas.

Exemplo de entrada:
23 25 22 24 26 21 20

Exemplo de saída:
Média semanal: 23.00
*/

#define TAM 7

float calcula_media(float vet[]) {
    float soma = 0;

    for (int i=0; i<TAM; i++) {
        soma += vet[i];    
    }

    return soma / TAM;
}

int main() { 
    float temperaturas[TAM];

    for (int i=0; i<TAM; i++) {
        scanf("%f", &temperaturas[i]);
    }

    printf("Média semanal: %.2f\n", calcula_media(temperaturas));

    return 0;
}