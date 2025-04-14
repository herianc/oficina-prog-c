#include <stdio.h>

/*
Exercício 3 – Verificação de maioridade
Um parque de diversões só permite a entrada de pessoas com 18 anos ou mais desa-
companhadas. Escreva um programa que receba a idade de uma pessoa e use uma função
chamada verificaEntrada para determinar se ela pode entrar sozinha.
• A função deve receber a idade como parâmetro.
• Imprimir:
– “Entrada permitida.” se a idade for maior ou igual a 18.
– “Entrada não permitida sem acompanhante.” caso contrário.

Exemplo de entrada/saída:
Digite a idade: 15
Entrada não permitida sem acompanhante.

*/

void verificaEntrada(int idade){

    if(idade >= 18)
        printf("Entrada permitida.\n");
    else
        printf("Entrada não permitida sem acompanhante.\n");

}

int main(){
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    verificaEntrada(idade);
    
    return 0;
}