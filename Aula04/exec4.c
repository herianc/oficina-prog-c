#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int main(){
    int tentativas = 3;
    char senha_correta[] = "1234";
    char senha_digitada[5];

    while (tentativas > 0) {
        printf("Digite a senha: ");
        scanf("%s", senha_digitada);

        if (strcmp(senha_digitada, senha_correta) == 0) {
            printf("Acesso liberado.\n");
            break;
        }
        else { 
            printf("Senha incorreta.\n");
            tentativas--;    
        }

        // Código opcional
        if (tentativas == 0)
            printf("\nNúmero de tentativas máxima alcançado.\n");
    }

    return EXIT_SUCCESS;
}