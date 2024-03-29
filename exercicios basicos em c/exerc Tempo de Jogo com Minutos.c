#include <stdio.h>

int main()
{
    int horaInicial, minutoInicial, horaFinal, minutoFinal, minTotais, horaTotais;

    scanf("%d", &horaInicial);
    scanf("%d", &minutoInicial);
    scanf("%d", &horaFinal);
    scanf("%d", &minutoFinal);

    horaTotais = (horaFinal) - (horaInicial);
    minTotais = (minutoFinal) - (minutoInicial);
    // Caso de duração negativa de minutos
    if (minTotais < 0)
    {
        minTotais = 60 + (minTotais);
        horaTotais--;
    }
    // Caso para duração negativa de horas
    if (horaTotais < 0)
    {
        horaTotais = 24 + (horaTotais);
    }
    // Caso de 24 horas de jogo
    if (horaFinal == horaInicial && minutoFinal == minutoInicial)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaTotais, minTotais);
    }

    return 0;
}