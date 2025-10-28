#include <stdio.h>

int main()
{
    int i, j;
    char x = 'A';
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i - j < 0)
            {
                printf(" ");
            }
            else
            {
                printf("%c", x);
            }
        }
        x++;
        printf("\n");
    }
}