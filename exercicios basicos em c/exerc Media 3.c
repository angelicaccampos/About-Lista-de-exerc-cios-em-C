#include <stdio.h>

int main()
{
    float x, y, z, w, media, notaExame, mediaFinal;

    scanf("%f %f %f %f", &x, &y, &z, &w);

    media = (0.2 * x) + (0.3 * y) + (0.4 * z) + (0.1 * w);

    printf("Media: %.1f\n", media);

    if (media >= 5.0 && media <= 6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &notaExame);
        printf("Nota do exame: %.1f\n", notaExame);

        mediaFinal = (media + notaExame) / 2;

        if (mediaFinal >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        if (mediaFinal <= 4.9)
        {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", mediaFinal);
    }

    if (media >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    if (media < 5.0)
    {
        printf("Aluno reprovado.\n");
    }

    return 0;
}