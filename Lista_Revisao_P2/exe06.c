#include <stdio.h>

/*
Escreva um programa que defina uma estrutura ALUNO com os campos nome (50
caracteres) e nota (float). O programa deve ler os dados de 3 alunos e imprimir o
nome do aluno com a maior nota. Utilize funções para ler e encontrar o aluno.
*/

typedef struct {
    char nome[50];
    float nota;
} ALUNO;


void lerAluno(ALUNO alunos[], int n){
    for (int i=0; i<n; i++) {
        printf("Digite o nome do aluno: ");
        scanf("%s", alunos[i].nome);
        printf("Digite a nota do aluno: ");
        scanf("%f", &alunos[i].nota);
        printf("\n");
    }
}

void imprimeMaiorNota(ALUNO alunos[], int n){
    float maiorNota = alunos[0].nota;
    int indice_maior = 0;

    for (int i=0; i<n; i++){
        if (alunos[i].nota > maiorNota){
            maiorNota = alunos[i].nota;
            indice_maior = i;
        }
    }

    printf("O aluno com a maior nota é: %s\n", alunos[indice_maior].nome);
}


int main(){
    ALUNO alunos[3];

    lerAluno(alunos, 3);
    imprimeMaiorNota(alunos, 3);

    return 0;
}