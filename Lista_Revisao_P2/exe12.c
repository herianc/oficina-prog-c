#include <stdio.h>

/*
Em uma cidade, foram registradas as temperaturas médias de 7 dias consecutivos.

Um meteorologista deseja um programa que leia as temperaturas e informe a tem-
peratura média da semana, além de listar quais dias tiveram temperatura acima
dessa média. O programa deve usar uma matriz 1x7 para armazenar os dados e
funções para ler os valores, calcular a média e exibir os resultados.
*/

#define DIAS 7

int main() {
    float temperatura;
    float soma = 0;
    float dias[1][DIAS];

    for (int i = 0; i < DIAS; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temperatura);
        dias[0][i] = temperatura;
        soma += temperatura;
    }

    printf("\nA média é do périodo é: %.2f\n", soma / DIAS);
    printf("Temperaturas acima da média\n");

    for (int i = 0; i < DIAS; i++) {
        if (dias[0][i] > soma / DIAS) {
            printf("Dia %d: %.2f\n", i + 1, dias[0][i]);
        }
    }

    return 0;
}
