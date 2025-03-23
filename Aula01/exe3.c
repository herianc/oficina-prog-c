#include <stdio.h>

/* 
Exercicio 3

Escreva um programa que tenha duas variáveis inteiras e imprima o resultado da 
média aritmética entre elas

*/

int main(){

    int var1 = 10, var2 = 8;
    float media = 0;

    media = (var1 + var2) / 2;

    printf("Valores: %d %d\n", var1, var2);

    printf("Média: %f\n", media);


    return 0;
}