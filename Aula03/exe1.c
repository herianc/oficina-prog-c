#include <stdio.h>

/*
Exercício 1 – Par ou Ímpar
Crie uma função chamada verificaPar que receba um número inteiro e diga se ele é par
ou ímpar.
- A função deve receber o número como parâmetro.
- O resultado deve ser impresso dentro da função.

Exemplo de entrada/saıda:
Digite um número: 7
O número é ímpar.

*/

void verificaPar(int numero){
    if(numero % 2 == 0) 
        printf("O número é par.\n");
    else
        printf("O número é impar.\n");
}


int main(){
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    verificaPar(numero);
    return 0;
}