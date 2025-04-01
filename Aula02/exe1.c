#include <stdio.h>

/* 
Exercício 1

Escreva um programa (usando funções) que leia três números reais e imprima a 
média aritmética destes números.

*/

float calculo_media(float n1, float n2, float n3){

    float media = 0; 
    
    media = (n1 + n2 + n3) / 3;

    return media;
}

int main(){

    float n1, n2, n3, resultado;

    printf("Digite 3 numeros (separados por espaços) para o calculo da media: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    resultado = calculo_media(n1, n2, n3);

    printf("A media é: %.3f\n", resultado);

    return 0;
}

