#include <stdio.h>

void tabela(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            int resultado = i * j; 
            printf("%d ", resultado);
        }
        printf("\n");
    }
}

int main() {
    int numero;
    
    printf("Digite um numero entre 1 e 9: ");
    scanf("%d", &numero);
    
    if (numero < 1 || numero > 9) {
        printf("Numero invalido! Por favor, digite um numero entre 1 e 9.\n");
        return 1;
    }
    
    tabela(numero);
    
    return 0;
}
