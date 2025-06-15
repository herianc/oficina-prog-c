#include <stdio.h>

/*
 Exercício 2 - Termo da sequência de Fibonacci
 Escreva uma função recursiva que receba um número n e retorne o n-ésimo termo
 da sequência de Fibonacci. A sequência começa com 0, 1, 1, 2, 3, 5, 8...
 Exemplo de entrada: 6
 Saída esperada: Termo 6 da sequência de Fibonacci = 8
 */

int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibo(n - 1) + fibo (n - 2);
}


int main() {
    int n = 0;
    printf("Digite um número: ");
    scanf("%d", &n);

    int resultado = fibo(n);
    printf("Termo %d da sequência de Fibonacci = %d\n", n, resultado);

    return 0;
}
