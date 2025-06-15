#include <stdio.h>

/*
 Impressão de uma contagem regressiva
 Escreva uma função recursiva que imprima uma contagem regressiva a partir de um
 número inteiro positivo fornecido pelo usuário até o número 0.
 Exemplo de entrada: 5
 Saída esperada:
 5
 4
 3
 2
 1
 0
 */

void imprime(int n) {
    if (n < 0)
        return;

    printf("%d\n", n);
    imprime(n - 1);
}

int main() {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    imprime(n);

    return 0;
}
