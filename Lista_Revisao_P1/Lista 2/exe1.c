#include <stdio.h>

int soma_pares(int v[], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) { 
        if (v[i] % 2 == 0) {
            soma = soma + v[i];
        }   
    }
    return soma;
}


int main() { 
    int numeros[5];
    
    for (int i=0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }
    
    int resultado = soma_pares(numeros, 5);
    printf("%d\n", resultado);
    
    return 0;
}

// Entrada: 3 6 2 7 4
// Saída: 12