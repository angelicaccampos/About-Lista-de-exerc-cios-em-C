#include <stdio.h>

int main()
{
    float Km, litros, Consumo;

    scanf("%f", &Km);
    scanf("%f", &litros);
    
    Consumo = (Km/litros);

    printf("%0.3f",Consumo);
    printf(" km/l\n");

    return 0;
}