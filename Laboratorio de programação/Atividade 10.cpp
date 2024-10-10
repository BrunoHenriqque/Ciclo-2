#include <stdio.h>

int calculaS(int N) {
    int S = 0;

    for (int i = 1; i <= N; i++) {
        S += i;
    }

    return S;
}

int main() {
    int N;

    printf("Digite um valor inteiro positivo N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Por favor, digite um valor positivo.\n");
        return 1;
    }

    int resultado = calculaS(N);

    printf("O valor de S para N = %d é: %d\n", N, resultado);

    return 0;
}
