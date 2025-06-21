#include <stdio.h>

/*
Exercício 1  - Cadastro simples de aluno
Crie um programa que defina uma estrutura chamada ALUNO com os campos: nome
(até 50 caracteres), idade e nota.
O programa deve ler os dados de um aluno e imprimir esses dados no final.
Você deve utilizar funções para ler e imprimir os dados.
*/

typedef struct {
    char nome[50];
    int idade;
    float nota;
} ALUNO;

ALUNO lerAluno() {
    ALUNO aluno_novo;

    printf("Digite o nome do aluno: ");
    scanf("%s", aluno_novo.nome);
    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno_novo.idade);
    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno_novo.nota);

    return aluno_novo;
} 

void imprimeAluno(ALUNO aluno) {
    printf("\nAluno: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Nota: %.2f\n", aluno.nota);
}

int main() {
    ALUNO aluno = lerAluno();
    imprimeAluno(aluno);
    
    return 0;
}
