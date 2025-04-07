#include <stdio.h>

/*
3. Dobro e metade

Crie um programa que peça um número e utilize funções separadas para
calcular o dobro e a metade desse número.

Exemplo de entrada:
Digite um número: 8

Saı́da esperada:
Dobro: 16
Metade: 4.00
*/


int calcula_dobro(int numero){
    
    return numero * 2;
}

float calcula_metade(float numero){

    return numero / 2;
}

int main(){

    int numero, dobro;
    float metade;

    printf("Digite um número: ");
    scanf("%d", &numero);

    dobro = calcula_dobro(numero);
    metade = calcula_metade(numero);

    printf("\n");
    printf("Dobro: %d\n", dobro);
    printf("Metade: %.2f\n", metade);

    return 0;
}