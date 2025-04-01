#include <stdio.h>

/*
Exercício 3 

Você quer construir um programa que calcula o valor total de uma conta de restaurante. 
Faça um programa, usando funções, que peça ao usuário o valor da conta e retorna o 
total a pagar considerando a taxa de serviço de 10%

Escreva um programa em C que calcule e exiba:
    - O valor da taxa de serviço.
    - O valor total da conta incluindo a taxa.

*/

#define TAXA 0.1 // Uma forma de definir constantes

float calculo_conta_total(float valor_conta){
    
    float taxa_servico = 0, total = 0;

    taxa_servico = valor_conta * TAXA;

    total = valor_conta + taxa_servico;

    return total;
}

int main(){

    float conta = 0, total = 0;

    printf("Valor da conta: R$ ");
    scanf("%f", &conta);

    total = calculo_conta_total(conta);

    printf("O valor total da conta foi: R$%.2f\n", total);

    return 0;
}