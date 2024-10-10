#include <stdio.h>

float valormedia(float nota1, float nota2, float nota3, char tipo) {
    float media;
    
    if (tipo == 'A' || tipo == 'a') {
        media = (nota1 + nota2 + nota3) / 3;
    } else if (tipo == 'P' || tipo == 'p') {
        media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / (5 + 3 + 2);
    } else {
        printf("Tipo de média inválido!\n");
        media = -1;
    }
    
    return media;
}

int main() {
    float nota1, nota2, nota3, media;
    char tipo;

    printf("Escreva a primeira nota: ");
    scanf("%f", &nota1);

    printf("Escreva a segunda nota: ");
    scanf("%f", &nota2);

    printf("Escreva a terceira nota: ");
    scanf("%f", &nota3);

    printf("Escreva 'A' para média aritmética ou 'P' para média ponderada: ");
    scanf(" %c", &tipo);

    media = calculaMedia(nota1, nota2, nota3, tipo);

    if (media != -1) {
        printf("A média calculada é: %.2f\n", media);
    }

    return 0;
}
