#include <stdio.h>

/*
Exercício 4 - Soma de valores de um vetor de estruturas
Defina uma estrutura chamada PRODUTO com os campos: nome (até 50 caracteres)
e preco (float).
Faça um programa que leia os dados de 5 produtos armazenados em um vetor de
PRODUTO de tamanho 5 e calcule o valor total da soma dos preços. Ao final, exiba o
valor total.
O programa deve conter funções para ler os produtos e para calcular a
soma dos preços.
*/

typedef struct {
    char nome[50];
    float preco;
} PRODUTO;

PRODUTO lerProduto(){
    PRODUTO produto_novo;

    printf("Nome do produto: ");
    fgets(produto_novo.nome, 50, stdin);
    printf("Preço do produto: ");
    scanf("%f", &produto_novo.preco);

    getchar();

    return produto_novo;
}

float somaPrecos(PRODUTO produtos[], int tamanho) {
    float soma = 0;

    for (int i=0; i<tamanho; i++) 
        soma += produtos[i].preco;    
    
    return soma;
}

int main() {
    PRODUTO produtos[5];
    float soma_precos = 0;

    for (int i=0; i<5; i++) 
        produtos[i] = lerProduto();

    printf("A soma dos preços é: %.2f\n", somaPrecos(produtos, 5));

    return 0;
}
