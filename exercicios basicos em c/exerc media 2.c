#include <stdio.h>

int main()
{
    double x, y, z, media;

    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%lf", &z);

    media = (0.2 * (x)) + (0.3 * (y)) + (0.5 * (z));

    printf("MEDIA = %.1lf", media);

    return 0;
}