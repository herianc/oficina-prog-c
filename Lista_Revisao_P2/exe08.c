#include <stdio.h>

/*
Escreva uma função recursiva que calcule a soma dos números de 1 até N (valor lido
do teclado) e imprima o resultado.
*/

int soma(int n) {
    if (n == 0 )
        return 0;
    else
        return n + soma(n - 1);
}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("A soma dos numeros de 1 ate %d e: %d\n", n, soma(n));

    return 0;
}