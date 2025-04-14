#include <stdio.h>

/*
Exercício 4 – Desempenho de aluno
Uma escola quer um sistema simples para classificar o desempenho dos alunos. O aluno
será considerado:
• Aprovado, se a média for maior ou igual a 7.
• Em recuperação, se a média for maior ou igual a 5 e menor que 7.
• Reprovado, se a média for menor que 5.
Faça um programa que:
• Peça duas notas ao aluno.
• Calcule a média.
• Use uma função chamada classificarAluno que:
– Recebe a média como parâmetro.
– Imprime a situação do aluno: “Aprovado”, “Recuperação” ou “Reprovado”.

Exemplo de entrada/saída:
Digite a primeira nota: 6.0
Digite a segunda nota: 7.0
Média: 6.5
Situação: Recuperação

*/

void calculaMedia(float nota1, float nota2){
    float media = (nota1 + nota2) / 2;

    printf("\nMédia: %.1f\n", media);

    if(media >= 7)
        printf("Situação: Aprovado\n");
    else if(media >= 5 && media < 7)
        printf("Situação: Recuperação\n");
    else
        printf("Situação: Reprovado\n");
}


int main(){
    float nota1, nota2;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    calculaMedia(nota1, nota2);

    return 0;
}