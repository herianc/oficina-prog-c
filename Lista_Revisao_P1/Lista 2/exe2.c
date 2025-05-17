#include <stdio.h>

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


// Entrada: C é legal
// Saída: 6