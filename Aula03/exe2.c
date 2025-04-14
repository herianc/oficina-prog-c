#include <stdio.h>

/*
Exercício 2 – Maior número
Crie uma função chamada maiorNumero que receba dois números inteiros e imprima qual
deles é o maior.
- A comparação deve ser feita dentro da função.
- Use estruturas if ou if-else.

Exemplo de entrada/saída:
Digite dois números: 8 12
O maior número é 12.

*/

void maiorNumero(int num1, int num2){

    if(num1 > num2)
        printf("O maior número é %d\n", num1);
        
    else if(num1 < num2)
        printf("O maior número é %d\n", num2);

    else 
        printf("Os dois números são iguais.\n");

}


int main(){
    int num1, num2;

    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);

    maiorNumero(num1, num2);

    return 0;
}