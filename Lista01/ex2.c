#include <stdio.h>

/*
2. Conversor de temperatura

Escreva um programa que converta temperaturas de Celsius para Fahrenheit.

Exemplo de entrada:
Digite a temperatura em Celsius: 25

Saı́da esperada:
Temperatura em Fahrenheit: 77.00

*/


int main(){
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    //Fórmula: F = (C × 9/5) + 32
    fahrenheit = (celsius * 1.8) + 32;

    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}