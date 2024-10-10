#include <stdio.h>

void encontraMaiorEMenor() {
    int valores[5];
    int maior, menor;

    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    maior = valores[0];
    menor = valores[0];

    for (int i = 1; i < 5; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
        if (valores[i] < menor) {
            menor = valores[i];
        }
    }

    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);
}

int main() {
    encontraMaiorEMenor();

    return 0;
}
