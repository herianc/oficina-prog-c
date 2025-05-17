#include <stdio.h>

/*
Exercício 5 - Média de notas

Escreva um programa que leia várias notas do aluno (entre 0 e 10) até que o usuário digite
uma nota negativa.

Use uma função calculaMedia que receba as notas e retorne a média. O programa
deve imprimir a média das notas válidas.

Entrada:
Notas: 7.5 8.0 6.0 -1

Saída:
Média: 7.17

*/

float calculaMedia(float soma, int notas) {
    return soma / notas;
}

int main() {
    float media = 0, soma = 0, media_final;
    int n = 0;

    printf("Notas: ");

    while (1) {
        scanf("%f", &media);
        
        if (media < 0)
            break;

        soma += media;
        n++;
    }

    printf("Média: %.2f\n", calculaMedia(soma, n));

}