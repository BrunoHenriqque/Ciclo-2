#include <stdio.h>

int calculaHoras(int totalSegundos) {
    return totalSegundos / 3600;
}

int calculaMinutos(int totalSegundos) {
    return (totalSegundos % 3600) / 60;
}

int calculaSegundos(int totalSegundos) {
    return totalSegundos % 60;
}

int main() {
    int totalSegundos;
    int horas, minutos, segundos;
    
    printf("Digite o número total de segundos: ");
    scanf("%d", &totalSegundos);
    
    horas = calculaHoras(totalSegundos);
    minutos = calculaMinutos(totalSegundos);
    segundos = calculaSegundos(totalSegundos);
    
    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.\n", totalSegundos, horas, minutos, segundos);
    
    return 0;
}
