#include <stdio.h>

int main()
{
    int x, y, z, w, DIFERENCA;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    scanf("%d", &w);

    DIFERENCA = ((x) * (y)) - ((z) * (w));

    printf("DIFERENCA = %d\n", DIFERENCA);

    return 0;
}