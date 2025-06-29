#include <stdio.h>


/*
Escreva um programa em C que leia os dados de 5 produtos (nome e preço) arma-
zenados em um vetor de PRODUTO. Calcule e imprima o preço total dos produtos.

Utilize funções.
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

    getchar(); // Para capturar o \n "deixado" pelo scanf

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
