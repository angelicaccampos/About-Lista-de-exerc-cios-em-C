#include <stdlib.h>

int main()
{
    float x1, y1, x2, y2, Distancia;

    scanf("%f %f %f %f", &x2, &y2, &x1, &y1);

    Distancia = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));

    printf("%0.4f\n", Distancia);

    return 0;
}