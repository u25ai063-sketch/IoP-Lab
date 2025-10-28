#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        for (int k = 1; k <= 4 - i; k++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        for (j = j - 2; j > 0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}