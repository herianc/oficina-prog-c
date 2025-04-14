#include <stdio.h>
#include <stdlib.h>
/*
Exercício 2 – Soma de números pares

Peça ao usuário um número inteiro positivo n e calcule a soma de todos os números pares
de 1 até n. Use um laço for.

Exemplo de entrada/saída:
Digite um número: 6

Soma dos pares até 6: 12

*/

int soma_pares(int n) {
    int soma = 0;

    for (int i=0; i<=n; i++) {
        if (i % 2 == 0)
            soma += i;
    }

    return soma;
}

int main(){
    int soma, n;
    
    printf("Digite um número: ");
    scanf("%d", &n);

    soma = soma_pares(n);

    printf("Soma dos pares até %d: %d\n", n, soma);

    return EXIT_SUCCESS;
}