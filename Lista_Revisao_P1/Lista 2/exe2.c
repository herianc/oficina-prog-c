#include <stdio.h>
#include <string.h>

int conta_letras(char frase[]) {
    int cont = 0;
    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] >= 'a' && frase[i] <= 'z') {
            cont++;    
        }
        
    }
    return cont;
}

int main() {
    char texto[100];
    fgets(texto, 100, stdin);
    printf("%d\n", conta_letras(texto));
    return 0;
}


// Entrada: C é legal
// Saída: 5 (O compilador considera "e" e "é" diferentes e por isso não é contabilizado no algoritmo)
