#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld ", &n);

    long long int notas[n];
    long long int soma = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &notas[i]);
        soma += notas[i];
    }

    double media = (double)soma / n;
    long long int maiores = 0;

    for (int i = 0; i < n; i++)
    {
        if (notas[i] > media)
        {
            maiores++;
        }
    }

    if (maiores == 0)
    {
        printf("0\n");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (notas[i] > media)
            {
                printf("%lld", notas[i]);
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
