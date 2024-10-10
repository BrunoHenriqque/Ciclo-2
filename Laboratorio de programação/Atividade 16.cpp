#include <stdio.h>

void combinarEVetores(int A[], int B[], int C[]) {
    for (int i = 0; i < 10; i++) {
        C[i] = A[i];
    }

    for (int i = 0; i < 10; i++) {
        C[i + 10] = B[i];
    }

    for (int i = 0; i < 20; i++) {
        for (int j = i + 1; j < 20; j++) {
            if (C[i] < C[j]) {
                int temp = C[i];
                C[i] = C[j];
                C[j] = temp;
            }
        }
    }
}

int main() {
    int A[10], B[10], C[20];

    printf("Digite 10 elementos inteiros para o vetor A:\n");
    for (int i = 0; i < 10; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Digite 10 elementos inteiros para o vetor B:\n");
    for (int i = 0; i < 10; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    combinarEVetores(A, B, C);

    printf("Vetor C em ordem decrescente:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
