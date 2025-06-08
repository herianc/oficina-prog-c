#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Exercício 5 - Leitura e exibição de nomes
Escreva um programa em C que leia 5 nomes (com até 79 caracteres cada) e, ao
final, exiba os nomes na ordem em que foram digitados.
*/

#define TAM 80

int main() {

    char nomes[5][TAM];

    for (int i=0; i < 5; i++) {
        printf("Digite o nome %d: ", i+1);
        fgets(nomes[i], TAM, stdin);
        nomes[i][strlen(nomes[i]) - 1] = '\0';
    }

    printf("\nOs nomes digitados foram:\n");
    for (int i=0; i < 5; i++) {
        printf("%s ", nomes[i]);
    }
    printf("\n");

    return 0;
}