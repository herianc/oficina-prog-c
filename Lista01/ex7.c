#include <stdio.h>

/*
7. Cálculo do salário lı́quido

Peça o salário bruto e calcule o salário lı́quido, considerando 11% de INSS e
5% de imposto de renda.

Exemplo de entrada:
Digite seu salário bruto: 3000

Saı́da esperada:
Desconto INSS (11%): R$ 330.00
Desconto IR (5%): R$ 150.00
Salário lı́quido: R$ 2520.00

*/


int main(){

    float salario_bruto, salario_liquido, ir, inss; 

    printf("Digite seu salário bruto: R$ ");
    scanf("%f", &salario_bruto);

    ir = 0.05 * salario_bruto;
    inss = 0.11 * salario_bruto;

    salario_liquido = salario_bruto - ir - inss;
    
    printf("\n");
    printf("Deconto INSS (11%%): R$ %.2f\n", inss);
    printf("Desconto IR (5%%): R$ %.2f\n", ir);
    printf("Salário líquido: R$ %.2f\n", salario_liquido);

    return 0;
}