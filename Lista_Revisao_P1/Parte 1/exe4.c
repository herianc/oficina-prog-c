#include <stdio.h>

/*
Exercício 4 - Estacionamento

Um estacionamento cobra R$5,00 pela primeira hora e R$3,00 por cada hora extra.
Escreva um programa que leia o número de horas estacionado e use uma função
calculaValor que retorne o valor a pagar.
O programa deve imprimir o valor final.

Entrada:
Horas estacionado: 4

Saída:
Valor a pagar: R$14.00
*/

float calculaValor(float horas) {
    if (horas > 1)
        return 5 + (horas - 1) * 3;
    else 
        return 5; 
}

int main() {
    float horas, valor;

    printf("Horas estacionado: ");
    scanf("%f", &horas);

    valor = calculaValor(horas);
    printf("Valor a pagar: R$%.2f\n", valor);

    return 0;
}