#include <stdio.h>

int verificaNumero(int numero) {
    if (numero >= 0) {
        printf("Esse número é positivo ou zero!\n");
        return 1;
    } else {
        printf("Esse número é negativo!\n");
        return 0;
    }
}

int main() {
    int numero;
    
    printf("Escreva um número inteiro qualquer: ");
    scanf("%d", &numero);
    
    printf("Você digitou o número: %d\n", numero);
    
    int resultado = verificaNumero(numero);
    

    if (resultado == 1) {
        printf("A função verificou que o número é positivo (ou zero)!\n");
    } else {
        printf("A função verificou que o número é negativo!\n");
    }
}
