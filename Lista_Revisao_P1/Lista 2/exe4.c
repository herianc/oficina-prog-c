#include <stdio.h>


/*
Exercı́cio – Maior valor no vetor
Em uma pesquisa sobre temperaturas em uma cidade, foram registradas as temperaturas máximas de 10 dias
consecutivos. As temperaturas foram armazenadas em um vetor de inteiros.
Escreva um programa em C que:
• Leia as 10 temperaturas (uma a uma) e armazene em um vetor.
• Crie uma função chamada maior valor que receba o vetor e retorne o maior valor entre os 10 elementos.
• Imprima, ao final, a maior temperatura registrada.

Exemplo de entrada:
25 27 30 28 32 26 31 29 30 33

Saı́da esperada:
Maior temperatura: 33
*/


int maior_valor(int vetor[], int tamanho) {
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

int main() {
    int temperaturas[10];

    printf("Digite as 10 temperaturas:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &temperaturas[i]);
    }

    int maior = maior_valor(temperaturas, 10);
    printf("Maior temperatura registrada: %d\n", maior);

    return 0;
}
