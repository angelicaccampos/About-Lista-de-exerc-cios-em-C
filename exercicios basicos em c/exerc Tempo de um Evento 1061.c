/*
beecrowd | 1061
Tempo de um Evento
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.

Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.

Entrada
Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o dia do mês no qual o evento vai começar. Na linha seguinte, será informado o momento no qual o evento vai iniciar, no formato hh : mm : ss. Na terceira e quarta linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas, indicando o término do evento.

Saída
Na saída, deve ser apresentada a duração do evento, no seguinte formato:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)

Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.

Exemplo de Entrada
Dia 5
08 : 12 : 23
Dia 9
06 : 13 : 23
Exemplo de Saída
3 dia(s)
22 hora(s)
1 minuto(s)
0 segundo(s)
*/

#include <stdio.h>

int main()
{
    char diaInicio[4], diaFim[4];
    int ddInicio, ddFim, hhInicio, mmInicio, ssInicio, hhFim, mmFim, ssFim, diasTotais, minTotais, horasTotais, ssTotais;

    // pega somente a parte inteira do char
    scanf("%s %d", diaInicio, &ddInicio);
    scanf("%d : %d : %d", &hhInicio, &mmInicio, &ssInicio);

    scanf("%s %d", diaFim, &ddFim);
    scanf("%d : %d : %d", &hhFim, &mmFim, &ssFim);

    // calulos dos tempos totais
    diasTotais = ddFim - ddInicio;
    horasTotais = hhFim - hhInicio;
    minTotais = mmFim - mmInicio;
    ssTotais = ssFim - ssInicio;

    // casos de tempos negativos
    if (ssTotais < 0)
    {
        ssTotais += 60;
        minTotais--;
    }
    if (minTotais < 0)
    {
        minTotais += 60;
        horasTotais--;
    }
    if (horasTotais < 0)
    {
        horasTotais += 24;
        diasTotais--;
    }

    printf("%d dia(s)\n", diasTotais);
    printf("%d hora(s)\n", horasTotais);
    printf("%d minuto(s)\n", minTotais);
    printf("%d segundo(s)\n", ssTotais);

    return 0;
}
