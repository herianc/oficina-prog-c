#include <stdio.h>

/*
Exercício 6 - Contador de divisores

Escreva um programa que leia um número inteiro positivo.
Use uma função contaDivisores que conte e retorne quantos divisores o número
possui (exceto ele mesmo). O programa deve imprimir esse valor.

Entrada:
Número: 12

Saída:
Quantidade de divisores: 5

*/

int conta_divisores(int num) {
    int divisores = 0;

    for (int i=1; i<num; i++) {
        if (num % i == 0)
            divisores++;
    }

    return divisores;
}

int main() {
    int num;

    printf("Número: ");
    scanf("%d", &num);

    printf("Quantidade de divisores: %d\n", conta_divisores(num));

    return 0;
}