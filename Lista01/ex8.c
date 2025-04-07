#include <stdio.h>

/*
8. Número invertido

O usuário deve inserir um número inteiro de três dı́gitos, e o programa deve
exibir o número invertido.

Exemplo de entrada:
Digite um número de três dı́gitos: 123

Saı́da esperada:
Número invertido: 321
*/

int main(){
    int numero, centenas, dezenas, unidades, invertido;

    printf("Digite um número de três dígitos: ");
    scanf("%d", &numero);

    centenas = numero / 100;
    dezenas = (numero / 10) % 10;
    unidades = numero % 10;

    invertido = (unidades * 100) + (dezenas * 10) + centenas;

    printf("Número invertido: %d\n", invertido);
    
    return 0;
}