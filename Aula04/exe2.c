#include <stdio.h>

/*
Exercício 2 – Soma de números pares

Peça ao usuário um número inteiro positivo n e calcule a soma de todos os números pares
de 1 até n. Use um laço for.

Exemplo de entrada/saída:
Digite um número: 6
Soma dos pares até 6: 12
*/


int main() {
    int n, soma;

    soma = 0;

    printf("Digite um número: ");
    scanf("%d", &n);


    for (int i=0; i<=n; i+=2) {
        // Neste for, i é acrescentado de 2 em 2; 
        
        soma+=i; // soma = soma + i;
    }

    printf("Soma dos pares até %d: %d\n", n, soma);
    
    return 0;
}