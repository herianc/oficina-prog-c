#include <stdio.h>

/*
Comparação entre duas pessoas
Crie uma estrutura chamada PESSOA com os campos: nome (até 50 caracteres) e
idade.
Faça um programa que leia os dados de duas pessoas e imprima o nome da pessoa
mais velha.
Você deve usar funções para ler os dados e para determinar a pessoa mais
velha.
*/

typedef struct {
    char nome[50];
    int idade;
} PESSOA;

PESSOA lerPessoa() {
    PESSOA pessoa_criada;

    printf("Digite o nome da pessoa: ");
    fgets(pessoa_criada.nome, 50, stdin);
    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa_criada.idade);
    
    getchar(); // Para capturar o \n "deixado" pelo scanf

    return pessoa_criada;
}

void comparaPessoas(PESSOA pessoa1, PESSOA pessoa2) {
    if (pessoa1.idade > pessoa2.idade) {
        printf("A pessoa mais velha é: %s\n", pessoa1.nome);
    } else {
        printf("A pessoa mais velha é: %s\n", pessoa2.nome);
    }
}

int main() {
    PESSOA pessoa1 = lerPessoa();
    PESSOA pessoa2 = lerPessoa();

    comparaPessoas(pessoa1, pessoa2);

    return 0;
}