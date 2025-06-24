#include <stdio.h>

/*
Uma papelaria deseja um programa que auxilie no controle de estoque. O sistema
deve permitir o cadastro de 3 produtos. Para cada produto devem ser lidos o nome
(até 50 caracteres), o preço e a quantidade em estoque. Ao final, o programa deve
exibir o nome e o valor total em estoque de cada produto (preço multiplicado pela
quantidade). O programa deve usar uma estrutura chamada PRODUTO e funções para
ler os dados e exibir os resultados.
*/

typedef struct {
    char nome[50];
    float preco;
    int estoque;

} PRODUTO;

PRODUTO lerProduto() {
    PRODUTO produto_novo;

    printf("Nome do produto: ");
    fgets(produto_novo.nome, 50, stdin);
    printf("Preço do produto: ");
    scanf("%f", &produto_novo.preco);
    printf("Quantidade em estoque: ");
    scanf("%d", &produto_novo.estoque);

    getchar();  
    printf("\n");
    return produto_novo;
}

void imprimeProduto(PRODUTO produto) {
    printf("\nProduto: %s", produto.nome);
    printf("Valor total em estoque: R$%.2f\n", produto.preco * produto.estoque);
}

int main() {
    PRODUTO produtos[3];

    for (int i=0; i<3; i++) 
        produtos[i] = lerProduto();

    for (int i=0; i<3; i++) 
        imprimeProduto(produtos[i]);

    return 0;
}