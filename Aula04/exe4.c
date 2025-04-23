#include <stdio.h>

/*
Exercício 4 – Senha com tentativas

Implemente um sistema de senha com no máximo 3 tentativas. A senha correta é "1234".
O programa deve pedir a senha até acertar ou até acabar as tentativas, utilizando while
e break.

Exemplo de entrada/saída:
Digite a senha: 0000
Senha incorreta.
Digite a senha: 1234
Acesso liberado.
*/

int main() {
    int senha_correta = 1234;
    int senha_digitada;
    int tentativas = 3;

    while (tentativas > 0) {
        printf("Digite a senha: ");
        scanf("%d", &senha_digitada);

        if (senha_digitada == senha_correta) {
            printf("Acesso liberado.\n");
            break;
        }

        tentativas--;

        if (tentativas <= 0)
            printf("\nNúmero de tentativas máxima atiginda.\n");
    }

    return 0;
}