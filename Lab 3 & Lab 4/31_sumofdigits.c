#include <stdio.h>

int main()
{

    int n, p, num, sum = 0;

    printf("Enter a number:\n");
    scanf("%d", &n);

    num = n;

    while (n > 0)
    {
        p = n % 10;
        sum = sum + p;
        n = n / 10;
    }

    printf("The sum of the digits in %d is %d", num, sum);
}