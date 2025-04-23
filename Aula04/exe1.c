#include <stdio.h>

/*
Exercício 1 – Contagem regressiva

Escreva um programa que peça ao usuário um número positivo e imprima uma contagem
regressiva até 0.

Exemplo de entrada/saída:
Digite um número: 5
5 4 3 2 1 0
*/

int main() {

    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (int i=n; i>=0; i--) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}