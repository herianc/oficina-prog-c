#include <stdio.h>

/*
1. Gorjeta do garçom
Um cliente deseja calcular quanto deve pagar de gorjeta em um restaurante.
O programa deve pedir o valor da conta e um percentual de gorjeta.
*/
int main(){

    float conta, percentual, gorjeta, total;

    printf("Valor da conta: ");
    scanf("%f", &conta);

    printf("Percentual de gorjeta: ");
    scanf("%f", &percentual);
    

    gorjeta = conta * (percentual / 100);
    total = conta + gorjeta;

    printf("\n");
    printf("Gorjeta: R$%.2f\n", gorjeta);
    printf("Total a pagar: R$%.2f\n", total);


    return 0;
}