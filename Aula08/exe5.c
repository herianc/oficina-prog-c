#include <stdio.h>
#include <string.h>

/*
Maior nota entre 3 alunos
Crie uma estrutura chamada ALUNO com os campos: nome (até 50 caracteres) e nota
(float).
Leia os dados de 3 alunos, armazenados em um vetor de ALUNO e imprima o nome
do aluno com a maior nota.
Você deve usar funções para ler os dados e para encontrar o aluno com
a maior nota
*/

typedef struct {
    char nome[50];
    float nota;
} ALUNO;

ALUNO lerAluno() {
    ALUNO aluno_novo;
    
    printf("Nome: ");
    fgets(aluno_novo.nome, 50, stdin);
    printf("Nota: ");
    scanf("%f", &aluno_novo.nota);
    getchar();

    return aluno_novo;
}

void ImprimeMaior(ALUNO alunos[], int tamanho) {
    float maior_nota = alunos[0].nota;
    int indice = 0;
    for (int i = 0; i < tamanho; i++) {
        if (alunos[i].nota > maior_nota) {
            maior_nota = alunos[i].nota;
            indice = i;
        }
    }
    
    printf("A maior nota é %.2f de %s", maior_nota, alunos[indice].nome);
}

int main() {
    ALUNO alunos[3];

    for (int i = 0; i < 3; i++) {
        printf("Aluno %d:\n", i + 1);
        alunos[i] = lerAluno();
    }

    ImprimeMaior(alunos, 3);

    return 0;
}