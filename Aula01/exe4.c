#include <stdio.h>


/*
Exercício 4

Imagine que você foi jantar em um restaurante e recebeu a conta no valor de R$ 212,00. 
O restaurante aplica uma taxa de serviço de 10% sobre o valor da conta.

Escreva um programa em C que calcule e exiba:
- O valor da taxa de serviço.
- O valor total da conta incluindo a taxa.

*/

int main(){

    float conta, taxa, total;
    
    conta = 212.00; 
    taxa = conta * 0.1;
    total = conta + taxa;

    // Para formatar a quantidade de casas decimais de uma variável de ponto flutuante basta utilizar %.nf
    // Onde n é a quantidade de casas decimais desejadas 

    printf("O valor da sua conta: R$%.2f\n", conta);

    printf("Valor da taxa de servico: R$%.2f\n", taxa);

    printf("Valor total da conta (incluso a taxa): R$%.2f\n", total);

    

    return 0;
}