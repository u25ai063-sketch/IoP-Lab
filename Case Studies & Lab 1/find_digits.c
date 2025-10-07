#include <stdio.h>

int main()
{
    int n, p, q, i;

    printf("Enter the number:\n");
    scanf("%d", &n);

    q = n;

    for (i = 0; n > 0;)
    {
        p = n % 10;
        if (p != 0 && q % p == 0)
        {
            i++;
        }
        n = n / 10;
    }

    printf("%d\n", i);
}