#include <stdio.h>

/*
Cálculo da média de duas notas
Crie uma estrutura chamada ALUNO com os campos: nome (até 50 caracteres) e duas
notas (float).
Faça um programa que leia os dados de um aluno, calcule a média das duas notas
e imprima o nome e a média.
O programa deve ter funções para ler o aluno, calcular a média e imprimir
os dados.
*/

typedef struct {
    char nome[50];
    float nota1;
    float nota2;
} ALUNO;

ALUNO lerAluno() {
    ALUNO aluno_criado;

    printf("Digite o nome do aluno: ");
    scanf("%s", aluno_criado.nome);
    printf("Digite a nota 1 do aluno: ");
    scanf("%f", &aluno_criado.nota1);
    printf("Digite a nota 2 do aluno: ");
    scanf("%f", &aluno_criado.nota2);

    return aluno_criado;
} 

void imprimeAluno(ALUNO aluno) {
    printf("\nAluno: %s\n", aluno.nome);
    printf("Nota 1: %.2f\n", aluno.nota1);
    printf("Nota 2: %.2f\n", aluno.nota2);
}

float calculaMedia(ALUNO aluno) {
    return (aluno.nota1 + aluno.nota2) / 2;
}

int main() {
    ALUNO aluno = lerAluno();

    imprimeAluno(aluno);
    printf("A média do aluno é: %.2f\n", calculaMedia(aluno));

    return 0;
}