#include <stdio.h>
#include <stdlib.h>

/*
Exercício 3 – Leitura até caractere especial

Crie um programa que leia caracteres do usuário até que ele digite o caractere #. O
programa deve contar quantas letras foram digitadas antes do #.
Exemplo de entrada/saída:

Digite caracteres (use # para parar):
a b c d #

Foram digitadas 4 letras.
*/


int main(){
    char c;
    int contador=0;

    printf("Digite caracteres (use # para parar):\n");

    // 1 > 0 é sempre verdadeiro, dessa forma o loop roda continuamente
    while (1>0) {
        scanf("%c", &c);

        if (c == '#') 
            break;
        else if (c != ' ')
            contador++;

    }

    printf("Foram digitadas %d letras\n", contador);

    return EXIT_SUCCESS;
}