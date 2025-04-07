#include <stdio.h>

/*
5. Cálculo do tempo de viagem

Peça a distância e a velocidade média da viagem, depois calcule o tempo
estimado.

Exemplo de entrada:
Distância da viagem (km): 300
Velocidade média (km/h): 100

Saı́da esperada:
Tempo estimado de viagem: 3.00 horas

*/

int main(){

    // S = so + vo * t 
    float distancia, velocidade, tempo;
    
    printf("Distância da viagem (km): ");
    scanf("%f", &distancia);

    printf("Velocidade média (km/h): ");
    scanf("%f", &velocidade);

    tempo = distancia / velocidade;

    printf("Tempo estimado de viagem: %.2f\n", tempo);

    return 0;
}