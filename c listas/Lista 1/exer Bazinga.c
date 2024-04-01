#include <stdio.h>

#define PAPEL 'p'
#define PEDRA 'd'
#define TESOURA 's'
#define LAGARTO 'g'
#define SPOCK 'o'

int main()
{
    char jogador1[10], jogador2[10];
    int vencedor = 0;

    scanf("%s %s", jogador1, jogador2);

    if (jogador1[2] == TESOURA && jogador2[2] == PAPEL)
        vencedor++;
    if (jogador1[2] == PAPEL && jogador2[2] == PEDRA)
        vencedor++;
    if (jogador1[2] == PEDRA && jogador2[2] == LAGARTO)
        vencedor++;
    if (jogador1[2] == LAGARTO && jogador2[2] == SPOCK)
        vencedor++;
    if (jogador1[2] == SPOCK && jogador2[2] == TESOURA)
        vencedor++;
    if (jogador1[2] == TESOURA && jogador2[2] == LAGARTO)
        vencedor++;
    if (jogador1[2] == LAGARTO && jogador2[2] == PAPEL)
        vencedor++;
    if (jogador1[2] == PAPEL && jogador2[2] == SPOCK)
        vencedor++;
    if (jogador1[2] == SPOCK && jogador2[2] == PEDRA)
        vencedor++;
    if (jogador1[2] == PEDRA && jogador2[2] == TESOURA)
        vencedor++;

    if (vencedor)
    {
        printf("Bazinga!\n");
    }
    else if (jogador1[2] == jogador2[2])
    {
        printf("De novo!\n");
    }
    else
    {
        printf("Raj trapaceou!\n");
    }

    return 0;
}
