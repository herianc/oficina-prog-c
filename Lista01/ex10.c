#include <stdio.h>

/*
10. Desafio: Valor do ingresso

Um cinema cobra R$ 30,00 por ingresso, mas oferece 50% de desconto para
pessoas com mais de 60 anos. Escreva um programa que peça a idade do
cliente e calcule o valor a ser pago.

Exemplo de entrada:
Digite sua idade: 65

Saı́da esperada:
Valor do ingresso: R$ 15.00

*/


int main(){

    int idade;
    float valor;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade > 60)
        valor = 15;
    else
        valor = 30;

    printf("\n");
    printf("Valor do ingresso: R$ %.2f\n", valor);
    
    return 0;
}