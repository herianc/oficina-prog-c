#include <stdio.h>

int conta_maiores(int v[], int n, int limite) {
    int i = 0, cont = 0;
    
    while (i < n) {
        if (v[i] > limite) {
            cont++;
        }
        i++;
    }
    return cont;
}


int main() {
    int valores[4];
    
    for (int i=0; i < 4; i++) {
        scanf("%d", &valores[i]);
    }
    
    int resultado = conta_maiores(valores, 4, 10);
    printf("%d\n", resultado);
    return 0;
}


// Entrada: 7 12 15 9
// Saída: 2