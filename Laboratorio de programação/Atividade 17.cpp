#include <stdio.h>

int somaMatriz(int A[5][5]) {
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            soma = soma + A[i][j];
        }
    }

    return soma;
}

int main() {
    int A[5][5];
    int resultado;

    printf("Digite os elementos da matriz A (5x5):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    resultado = somaMatriz(A);

    printf("A soma dos elementos da matriz A é: %d\n", resultado);

    return 0;
}
