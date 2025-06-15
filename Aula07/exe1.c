#include <stdio.h>

/*
 Fatorial recursivo
 Escreva uma função recursiva em C que calcule o fatorial de um número inteiro
 positivo n. Em seguida, escreva o programa principal que leia um número fornecido
 pelo usuário e imprima seu fatorial.
 Exemplo de entrada: 5
 Saída esperada: Fatorial = 120
 */


int fatorial(int n) {
    if (n <= 0 || n==1)
        return 1;
    return n * fatorial(n-1);
}

int main() {
    int n, resultado = 0;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    resultado = fatorial(n);
    printf("\n%d! = %d\n", n, resultado);

    return 0;
}
