#include <stdio.h>

/*
Exercício 1 - Orçamento de pintura

Um pintor cobra R$20,00 por metro quadrado pintado.
Escreva um programa que leia a altura e a largura de uma parede, 
calcule a área total e utilize uma função calculaPreco que receba 
a área e retorne o valor total a pagar. O programa principal deve 
imprimir o valor a pagar.

Entrada: 
Altura: 2.5
Largura: 4

Saída:
Valor a pagar: R$200.00

*/

// Cálculo do orçamento a partir da altura e largura
float calculo_orcamento(float altura, float largura) {
    float area, orcamento; 
    float preco_metro_quadrado = 20;

    area = altura * largura;
    orcamento = area * preco_metro_quadrado;

    return orcamento;
}

int main(){
    float altura, largura, preco;

    printf("Altura: ");
    scanf("%f", &altura);
    printf("Largura: ");
    scanf("%f", &largura);

    preco = calculo_orcamento(altura, largura);

    printf("Valor a pagar: R$%.2f\n", preco);

    return 0;
}