#include <stdio.h>

int main()
{
    int num, n, sum = 0, x, q;

    printf("Enter a number:\n");
    scanf("%d", &num);

    n = num;

    for (int p; n > 0;) // reverse
    {
        p = n % 10;
        sum = (sum * 10) + p;
        n = n / 10;
    }

    printf("Reverse of no. is %d\n", sum);

    sum = 0;
    for (q; num > 0;)
    {

        q = num % 10;
        sum = sum + (q * q);
        num = num / 10;
    }

    x = (sum) - ((q * q) + (q * q));

    printf("%d", x);
}
