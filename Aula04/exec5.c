#include <stdio.h>
#include <stdlib.h>

/*
Exercício 5 – Tabuada

Peça ao usuário um número inteiro de 1 a 10 e mostre a tabuada de multiplicação
desse número, de 1 até 10. Use um laço for.

Exemplo de entrada/saída:
Digite um número: 3
3 x 1 = 3
3 x 2 = 6
...
3 x 10 = 30

*/

void tabuada(int n) {
    for (int i=1; i<=10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}


int main(){
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    tabuada(n);

    return EXIT_SUCCESS;
}