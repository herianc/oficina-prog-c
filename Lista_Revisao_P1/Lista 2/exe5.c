/*
Exercı́cio - Ordenação de Vetor

Durante um jogo de adivinhação, um participante digitou 5 números inteiros. O programa deve armazenar esses
números em um vetor e, em seguida, ordená-los em ordem crescente para facilitar a verificação das tentativas.
Escreva um programa em C que:• Leia 5 números inteiros digitados pelo usuário.
• Armazene os valores em um vetor.
• Ordene o vetor em ordem crescente.
• Imprima o vetor ordenado na tela.

Exemplo de entrada:
42 10 7 99 1

Saı́da esperada:
Vetor ordenado: 1 7 10 42 99

ATENÇÃO: para este exercı́cio NÃO utilize funções separadas, faça seu código na main()
*/



#include <stdio.h>

int main() {
    int numeros[5];

    // Leitura dos números
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    // Ordenação (Bubble Sort)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    // Impressão do vetor ordenado
    printf("Vetor ordenado: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
