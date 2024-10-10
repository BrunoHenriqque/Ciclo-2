#include <stdio.h>

int somaDivisiveis(int a, int b, int c) {
    int soma = 0;
    
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    
    for (int i = b; i <= c; i++) {
        if (i % a == 0) {
            soma += i;
        }
    }
    
    return soma;
}

int main() {
    int a, b, c, resultado;
    
    printf("Digite um número inteiro maior que 1 (a): ");
    scanf("%d", &a);
    
    if (a <= 1) {
        printf("O número 'a' deve ser maior que 1!\n");
        return 1;
    }
    
    printf("Digite o valor de b (inteiro): ");
    scanf("%d", &b);
    
    printf("Digite o valor de c (inteiro): ");
    scanf("%d", &c);
    
    resultado = somaDivisiveis(a, b, c);
    
    printf("A soma dos números divisíveis por %d entre %d e %d é: %d\n", a, b, c, resultado);
    
    return 0;
}
