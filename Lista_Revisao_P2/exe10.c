#include <stdio.h>

/*
Escreva um programa que leia 5 nomes (cada um com até 79 caracteres), armazene
em um vetor de strings, e ao final exiba o nome que possui maior quantidade de
caracteres.
*/

#define TAM 80

int main() {
    char nomes[5][TAM];
    int indice_maior, tam_maior = 0;

    for (int i=0; i < 5; i++) {
        printf("Digite o nome %d: ", i+1);
        fgets(nomes[i], TAM, stdin);
        nomes[i][strlen(nomes[i]) - 1] = '\0';

        if (strlen(nomes[i]) > tam_maior) {
            tam_maior = strlen(nomes[i]);
            indice_maior = i;
        }
    }
    
    printf("\nO maior nome é %s e contem %d caracteres.\n", nomes[indice_maior], strlen(nomes[indice_maior]));

    return 0;
}