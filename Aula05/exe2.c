#include <stdio.h>

/*
Execício 2 - Acima da Média

Você deve ler 10 números inteiros e armazená-los em um vetor. Depois, calcule a média
dos números e imprima apenas os que forem maiores que essa média.

Exemplo de entrada:
5 7 9 4 6 10 3 8 2 1

Exemplo de saída:
Números acima da média: 5 7 9 6 10 8

*/
#define TAM 10

float calcula_media(int vet[]) {
    float soma = 0;

    for (int i=0; i<TAM; i++) {
        soma += vet[i];    
    }

    return soma / TAM;
}

int main() { 
    int numeros[TAM];
    float media;

    for (int i=0; i<TAM; i++) {
        scanf("%d", &numeros[i]);
    }

    media = calcula_media(numeros);

    printf("Média: %f\n", media);
    printf("Números acima da média:");

    for (int i=0; i<TAM; i++) {
        if (numeros[i] >= media) printf(" %d", numeros[i]);
    }

    puts("");

    return 0;
}