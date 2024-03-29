#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int y, x, soma = 0;
        scanf("%d%d", &x, &y);

        if (x < y)
        {
            int k = x + 1;
            for (int j = k; j <= y; j++)
            {
                if (j % 2 != 0)
                {
                    soma += j;
                }
            }
        }
        else
        {
            int p = y + 1;
            for (int j = p; j <= x; j++)
            {
                if (j % 2 != 0)
                    soma += j;
            }
        }
        printf("%d\n", soma);
    }

    return 0;
}
