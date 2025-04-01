#include <stdio.h>
#define PI 3.1416 // Uma forma de declarar constantes 

/*
Exercício 2

Escreva um programa (usando funções) que, dado o perímetro de um círculo, 
calcula sua área

*/


// Função que calcula a área de um circulo a partir do seu perimetro
float calculo_area_circulo(float perimetro){
    
    float area = 0, raio = 0;

    // O perimetro do circulo é dado por: perimetro = 2 * PI * raio 
    raio = perimetro / (2 * PI);

    // A área do círuclo é dada por: Área = PI * raio ^ 2 
    area = PI * raio * raio; // Ou area = PI * pow(raio, 2) caso utilize a biblioteca math.h

    return area;
}


int main(){

    float perimetro = 0, area_circulo = 0; 

    printf("Informe o perimetro do circulo: ");
    scanf("%f", &perimetro);

    area_circulo = calculo_area_circulo(perimetro);

    printf("A área do circulo é: %f\n", area_circulo);
    return 0;
}