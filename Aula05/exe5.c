#include <stdio.h>
#include <string.h>

/*
Quantidade de Espaços

Escreva um programa que leia uma frase (usando fgets) e conte quantas espaços ela
possui
Considere que:
• As palavras são separadas por espaços.
• Você deve percorrer a frase manualmente, contando letras e espaços.

Exemplo de entrada:
Programar em C é muito divertido

Exemplo de saída:
5 espaço(s)
*/

#define MAX 100

int main() {
    char frase[MAX];
    int i=0, contador=0;

    fgets(frase, MAX, stdin);
    frase[strlen(frase) - 1] = '\0';

    while(1) {
        if (frase[i] == '\0')
            break;
        if (frase[i] == ' ')
            contador++;
        
        i++;
    }

    printf("%d espaço(s)\n", contador);

    return 0;
}