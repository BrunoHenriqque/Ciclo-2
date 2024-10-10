#include <stdio.h>

int somaNumerosEntre(int a, int b) {
    int soma = 0;
    
    if (a < b) {
        for (int i = a + 1; i < b; i++) {
            soma += i;
        }
    } else if (b < a) {
        for (int i = b + 1; i < a; i++) {
            soma += i;
        }
    } else {
        printf("Nao possui numeros inteiros entre dois numeros iguais.\n");
        return 0;
    }
    
    return soma;
}

int main() {
    int numero1, numero2, resultado;
    
    printf("Escreva o primeiro numero (positivo): ");
    scanf("%d", &numero1);
    
    printf("Escreva o segundo numero (positivo): ");
    scanf("%d", &numero2);
    
    if (numero1 <= 0 || numero2 <= 0) {
        printf("Os numeros devem ser positivos!\n");
        return 1;
    }
    
    resultado = somaNumerosEntre(numero1, numero2);
    
    printf("A soma dos numeros inteiros entre %d e %d é: %d\n", numero1, numero2, resultado);
    
    return 0;
}
