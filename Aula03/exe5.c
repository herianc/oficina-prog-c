#include <stdio.h>

/*
Exercício 5 – Verificação de velocidade

Um motorista foi flagrado por um radar de velocidade. A velocidade máxima permitida
na via é de 80 km/h. Escreva um programa que:
• Leia a velocidade do carro.
• Use uma função chamada verificaVelocidade que:
– Receba a velocidade como parâmetro.
– Imprima:
∗ “Dentro do limite de velocidade.” se a velocidade for menor ou igual a 80.
∗ “Multa por excesso de velocidade.” se a velocidade for maior que 80.
Exemplo de entrada/saída:
Digite a velocidade do carro: 92
Multa por excesso de velocidade.
*/

void verificaVelocidade(int velocidade){
    if (velocidade <= 80)
        printf("Dentro do limite de velocidade.\n");
    else
        printf("Multa por excesso de velocidade.\n");
}

int main(){
    int vel;
    
    printf("Digite a velocidade do carro: ");
    scanf("%d", &vel);

    verificaVelocidade(vel);
    
    return 0;
}