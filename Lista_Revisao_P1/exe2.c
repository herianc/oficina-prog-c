#include <stdio.h>

/*

Exercício 2 - Cálculo de trajeto

Um carro percorre 12 km por litro de combustível.
Escreva um programa que leia a distância a ser percorrida (em km) e a quantidade de
combustível disponível (em litros). Use uma função verificaSeChega que retorne 1 se o
carro consegue fazer a viagem e 0 se não.
O programa principal deve imprimir uma mensagem adequada.

Entrada:
Distância: 100
Combustível disponível: 8

Saída:
Não é possível completar a viagem.
*/

#define AUTONOMIA_VEICULO 12; // O veículo faz 12 km por litro

int verificaSeChega(float distancia, float combustivel) { 
    float autonomia = combustivel * AUTONOMIA_VEICULO;

    if (autonomia >= distancia) 
        return 1;
    else 
        return 0;
}

int main() {
    float d, c;
    int resultado;

    printf("Distância: ");
    scanf("%f", &d);
    printf("Combustível disponível: ");
    scanf("%f", &c);

    resultado = verificaSeChega(d, c);

    if (resultado == 1)
        printf("É possível completar a viagem.\n");
    else
        printf("Não é possível completar a viagem.\n");

    return 0;
}