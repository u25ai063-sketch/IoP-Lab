#include <stdio.h>

int main()
{
    int num, n, sum = 0;

    printf("Enter a number:\n");
    scanf("%d", &num);

    n = num;

    for (int p; n > 0;)
    {
        p = n % 10;
        sum = (sum * 10) + p;
        n = n / 10;
    }

    if (sum == num)
    {
        printf("%d is a palimdrom number", sum);
    }

    else
    {
        printf("%d is not a palimdrom number", num);
    }
}