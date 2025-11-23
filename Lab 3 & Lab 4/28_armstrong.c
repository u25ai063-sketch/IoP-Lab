#include <stdio.h>
#include <math.h>

int main()
{

    int n, p, i, r, sum = 0;

    printf("Enter a number:\n");
    scanf("%d", &n);

    p = n;
    r = n;

    for (i = 0; n > 0; i++)
    {
        n = n / 10;
    }

    for (int q; p > 0;)
    {
        q = p % 10;
        sum = pow(q, i) + sum;
        p = p / 10;
    }

    if (r == sum)
    {
        printf("%d number is an armstrong number", sum);
    }

    else
    {
        printf("%d number is not an armstrong number", r);
    }
}