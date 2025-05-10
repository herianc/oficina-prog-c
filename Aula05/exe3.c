#include <stdio.h>

/*
Exercício 3 - Frequência de Notas

Uma professora aplicou uma prova para 15 alunos e anotou as notas (números inteiros de
0 a 10). Escreva um programa que leia essas notas em um vetor e depois exiba quantos
alunos tiraram cada nota possível.

Exemplo de entrada:
5 6 7 5 6 8 9 6 5 5 7 6 6 8 10

Exemplo de saída:
Nota 0: 0 aluno(s)
Nota 1: 0 aluno(s)
Nota 2: 0 aluno(s)
Nota 3: 0 aluno(s)
Nota 4: 0 aluno(s)
Nota 5: 4 aluno(s)
Nota 6: 5 aluno(s)
Nota 7: 2 aluno(s)
Nota 8: 2 aluno(s)
Nota 9: 1 aluno(s)
Nota 10: 1 aluno(s)
*/

#define TAM 15

int main() {
    int notas[TAM];

    for (int i=0; i<TAM; i++) {
        scanf("%d", &notas[i]);
    }

    return 0;
}