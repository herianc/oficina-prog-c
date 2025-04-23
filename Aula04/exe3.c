#include <stdio.h>

/*
Exercício 3 – Leitura até caractere especial

Crie um programa que leia caracteres do usuário até que ele digite o caractere #. O
programa deve contar quantas letras foram digitadas antes do #.

Exemplo de entrada/saída:
Digite caracteres (use # para parar):
a b c d #
Foram digitadas 4 letras.

*/

int main() {
    char letra;
    int contador = 0;

    printf("Digite caracteres (use # para parar):\n");

    while (1) {
        scanf("%c", &letra);

        if (letra == '#') 
            break;
        else if (letra != ' ') { // Desconsiderando espaços em branco.
            contador++;
        }
    }

    printf("Foram digitadas %d letras.\n", contador);

    return 0;
}