#include <stdio.h>

int main()
{
    int money, notaCem, notaCinquenta, notaVinte, notaDez, notaCinco, notaDois;

    scanf("%d", &money);
    printf("%d\n", money);
    // notas de cem necessarias
    notaCem = money / 100;
    printf("%d nota(s) de R$ 100,00\n", notaCem);
    // recalcular as notas necessarias
    money = money - (notaCem * 100);

    notaCinquenta = money / 50;
    printf("%d nota(s) de R$ 50,00\n", notaCinquenta);
    money = money - (notaCinquenta * 50);

    notaVinte = money / 20;
    printf("%d nota(s) de R$ 20,00\n", notaVinte);
    money = money - (notaVinte * 20);

    notaDez = money / 10;
    printf("%d nota(s) de R$ 10,00\n", notaDez);
    notaDez = money - (notaDez * 10);

    notaCinco = money / 5;
    printf("%d nota(s) de R$ 5,00\n", notaCinco);
    money = money - (notaCinco * 5);

    notaDois = money / 2;
    printf("%d nota(s) de R$ 2,00\n", notaDois);
    money = money - (notaDois * 2);
    //o ultimo valor sera um ou zero
    printf("%d nota(s) de R$ 1,00\n", money);

    return 0;
}