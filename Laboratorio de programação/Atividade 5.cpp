#include <stdio.h>

float calculaPercentual(float antigo, float atual) {
    float percentual;
    percentual = ((atual - antigo) / antigo) * 100;
    return percentual;
}

int main() {
    float valorAntigo, valorAtual, resultado;

    printf("Digite o valor antigo do produto: ");
    scanf("%f", &valorAntigo);

    printf("Digite o valor atual do produto: ");
    scanf("%f", &valorAtual);

    resultado = calculaPercentual(valorAntigo, valorAtual);

    printf("O percentual de aumento foi: %f%%\n", resultado);

    return 0;
}
