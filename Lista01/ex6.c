#include <stdio.h>

/*
6. Conta de energia

O programa deve pedir a quantidade de kWh consumidos e o preço do kWh,
depois calcular o valor total da conta.

Exemplo de entrada:
Consumo de energia (kWh): 250
Preço por kWh: 0.75

Saı́da esperada:
Valor total da conta: R$ 187.50

*/

int main(){

    float consumo, preco_kwh;

    printf("Consumo de energia (kWh): ");
    scanf("%f", &consumo);

    printf("Preço por kWh: ");
    scanf("%f", &preco_kwh);

    printf("\n");
    printf("Valor total da conta: R$ %.2f\n", consumo * preco_kwh);

    return 0;
}