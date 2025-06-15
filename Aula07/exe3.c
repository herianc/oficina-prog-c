#include <stdio.h>
#include <math.h>

/*
 Exercício 3 - Verificação de número primo usando recursão
 Escreva uma função recursiva que verifique se um número inteiro maior que 1 é
 primo. A função deve testar se existe algum divisor de n diferente de 1 e dele
 mesmo.
 Exemplo de entrada: 7
 Saída esperada: 7 é primo.
 */

#define TRUE 1
#define FALSE 0

int eh_primo(int n, int divisor) {
    if (divisor == 1)
        return FALSE;

    if(sqrt(n) < divisor)
        return TRUE;
    
    if (n % divisor == 0)
        return FALSE;

    return eh_primo(n, divisor + 1);
}

int main() {
    int n;
    printf("Digite um número inteiro maior que 1: ");
    scanf("%d", &n);

    if (eh_primo(n, 2)) {
        printf("%d é primo\n", n);
    }
    else {
        printf("%d não é primo\n", n);
    }

    return 0;
}
