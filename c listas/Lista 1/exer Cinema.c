#include <stdio.h>

int main()
{
    int fileiras, lugares, numAcentos;
    scanf("%d %d", &fileiras, &lugares);

    if (fileiras > 25 || lugares > 25)
    {
        return 0;
    }
    else if (fileiras <= 25 || lugares <= 25)
    {
        char salaCinema[fileiras][lugares], fileira;
        for (int f = 0; f < fileiras; f++)
        {
            for (int l = 0; l < lugares; l++)
            {
                salaCinema[f][l] = 0;
            }
        }
        
        while (scanf(" %c%d", &fileira, &numAcentos) != EOF)
        {
            int indiceFileira = fileira - 'A';
            int indiceLugar = numAcentos - 1;
            salaCinema[indiceFileira][indiceLugar] = 1;
        }

        printf("  ");
        for (int l = 1; l <= lugares; l++)
        {
            printf("%02d ", l);
        }

        printf("\n");
        for (int f = fileiras - 1; f >= 0; f--)
        {
            printf("%c ", 'A' + f);
            for (int l = 0; l < lugares; l++)
            {
                if (salaCinema[f][l])
                {
                    printf("XX ");
                }
                else
                {
                    printf("-- ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}