#include <stdio.h>

/*
Exercicio 2

Escreva um programa que declare duas variáveis do tipo inteiro e que realize todas as 
operações matemáticas vistas em sala e imprime para o usuário os resultados.

*/

int main(){

    int n1, n2;
    int soma, subtracao, mult;
    float divisao;

    n1 = 5;
    n2 = 10;

    soma = n2 + n1;
    subtracao = n2 - n1;
    mult = n2 * n1;
    divisao = n2 / n1;


    printf("Número 1: %d - Número 2: %d\n\n", n1, n2);

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", mult);
    printf("Divisao: %f\n", divisao);

    return 0;
}