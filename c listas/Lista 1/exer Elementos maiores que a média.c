#include <stdio.h>

int main()
{
    int n;
    scanf("%d ", &n);

    int notas[n];
    int soma = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &notas[i]);
        soma += notas[i];
    }
    int media = soma / n;

    int maiores = 0;
    for (int i = 0; i < n; i++)
    {
        if (notas[i] > media)
        {
            maiores++;
        }
    }

    if (maiores <= 0)
    {
        printf("0 \n");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (notas[i] > media)
            {
                printf("%d", notas[i]);
                maiores--;
                if (maiores > 0)
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
