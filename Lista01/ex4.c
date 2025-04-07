#include <stdio.h>

/*
4. Cálculo do IMC

Peça ao usuário seu peso (em kg) e altura (em metros) e calcule o Índice de
Massa Corporal (IMC).

Exemplo de entrada:
Digite seu peso (kg): 70
Digite sua altura (m): 1.75

Saı́da esperada:
Seu IMC é: 22.86
*/


int main(){

    float peso, altura, imc;

    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (m): ");
    scanf("%f", &altura);


    //Fórmula: IMC = peso / altura²
    imc = peso / (altura * altura);

    printf("\n");
    printf("Seu IMC é: %.2f\n", imc);

    return 0;
}