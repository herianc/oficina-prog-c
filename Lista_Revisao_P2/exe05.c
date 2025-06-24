#include <stdio.h>

/*
Escreva um programa que use recursão para imprimir todos os números de N até 1.
O valor de N deve ser lido do teclado.
*/

void imprimirNumeros(int n) {
    if (n >= 1) {
        printf("%d\n", n);
        imprimirNumeros(n - 1);
    }
}

int main() {
    int n;
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    imprimirNumeros(n);

    return 0;
}