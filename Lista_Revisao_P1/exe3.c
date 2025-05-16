#include <stdio.h>

/*
Exercício 3 Classificação de risco

Uma clínica médica usa o IMC (Índice de Massa Corporal) para classificar pacientes.
Escreva um programa que leia o peso (em kg) e a altura (em metros) de uma pessoa,
use uma função calculaIMC para calcular o IMC e outra função classificaIMC para
retornar uma string com a classificação:

• Abaixo de 18.5: "Abaixo do peso"
• De 18.5 a 24.9: "Peso normal"
• 25.0 ou mais: "Acima do peso"

O programa deve imprimir o IMC e a classificação.
Entrada:
Peso: 70
Altura: 1.75

Saída:
IMC: 22.86
Classificação: Peso normal

*/

float calcula_imc(float peso, float altura) {
    return peso / (altura * altura);
}

void classifica_imc(float imc) {
    if (imc < 18.5)
        printf("Classificação: Abaixo do peso\n");
    else if (imc >= 18.5 && imc < 24.9)
        printf("Classificação: Peso normal\n");
    else 
        printf("Classificação: Acima do peso\n");
}

int main() {
    float peso, altura;

    printf("Peso (kg): ");
    scanf("%f", &peso);
    printf("Altura (m): ");
    scanf("%f", &altura);

    // Chamando uma função dentro dos argumentos de outra função
    classifica_imc(calcula_imc(peso, altura)); 

    return 0;
}