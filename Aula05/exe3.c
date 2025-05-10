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

int main() {
    int notas[15];  
    int frequencia[11] = {0};  // Vetor para contar a frequência de cada nota (0 a 10)
    int i;
    
    // Leitura das notas
    printf("Digite as 15 notas: ");
    for (i = 0; i < 15; i++) {
        scanf("%d", &notas[i]);
        
        // Verifica se a nota está no intervalo válido (0 a 10)
        if (notas[i] >= 0 && notas[i] <= 10) {
            frequencia[notas[i]]++;  // Incrementa a contagem da nota correspondente
        } else {
            printf("Nota inválida! Digite um número entre 0 e 10.\n");
            i--;  // Permite que o usuário digite a nota novamente
        }
    }
    
    // Exibição da frequência de cada nota
    printf("\nFrequência das notas:\n");
    for (i = 0; i <= 10; i++) {
        printf("Nota %d: %d aluno(s)\n", i, frequencia[i]);
    }
    
    return 0;
}
