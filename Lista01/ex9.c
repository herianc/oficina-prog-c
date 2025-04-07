#include <stdio.h>

/*
9. Aumento progressivo

O funcionário recebe aumentos sucessivos de 5%, 10% e 15% ao longo de três
anos.

Exemplo de entrada:
Digite o salário inicial: 2000

Saı́da esperada:
Salário após 1 ano: R$ 2100.00
Salário após 2 anos: R$ 2310.00
Salário após 3 anos: R$ 2656.50

*/

int main(){

    float salario, salario1, salario2, salario3;

    printf("Digite o salário inicial: R$ ");
    scanf("%f", &salario);

    printf("\n");

    salario1 = salario + (salario * 0.05);
    printf("Salário após 1 ano: R$ %.2f\n", salario1);

    salario2 = salario1 + (salario1 * 0.1);
    printf("Salário após 2 ano: R$ %.2f\n", salario2);

    salario3 = salario2 + (salario2 * 0.15);
    printf("Salário após 3 ano: R$ %.2f\n", salario3);

    

    return 0;
}