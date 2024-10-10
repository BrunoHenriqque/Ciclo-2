#include <stdio.h>

int calculaDuracao(int horaInicio, int minutoInicio, int horaTermino, int minutoTermino) {
    int totalInicio = horaInicio * 60 + minutoInicio;
    int totalTermino = horaTermino * 60 + minutoTermino;

    if (totalTermino < totalInicio) {
        totalTermino += 24 * 60;
    }

    return totalTermino - totalInicio;
}

int main() {
    int horaInicio, minutoInicio;
    int horaTermino, minutoTermino;

    printf("Qual é a hora de início do jogo (HH MM): ");
    scanf("%d %d", &horaInicio, &minutoInicio);

    printf("Qual é a hora de término do jogo (HH MM): ");
    scanf("%d %d", &horaTermino, &minutoTermino);

    int duracao = calculaDuracao(horaInicio, minutoInicio, horaTermino, minutoTermino);

    printf("A duração do jogo em minutos é: %d minutos\n", duracao);

    return 0;
}
