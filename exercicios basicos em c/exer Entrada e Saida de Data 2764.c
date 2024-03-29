#include <stdio.h>

int main()
{
    int d, m, a;

    scanf("%d/%d/%d", &d, &m, &a);
    //%02d acrescenta um zero em numeros de uma casa
    printf("%02d/%02d/%02d\n", m, d, a);
    printf("%02d/%02d/%02d\n", a, m, d);
    printf("%02d-%02d-%02d\n", d, m, a);

    return 0;
}