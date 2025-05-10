#include <stdio.h>
#include <string.h>

/*
Exercício 4 - Contador de Caracteres

Escreva um programa que leia uma palavra (sem espaços) e imprima quantos caracteres
ela possui.
Dica: use a função strlen.

Exemplo de entrada:
computador

Exemplo de saída:
A palavra tem 10 caracteres.

*/

int main() {
    char palavra[20];

    scanf("%s", palavra);

    printf("A palavra tem %d caracteres.\n", strlen(palavra));

    return 0;
}