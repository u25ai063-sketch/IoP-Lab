#include <stdio.h>

int main()
{

    int n, num, p, sum = 0;

    printf("Enter a number\n");
    scanf("%d", &n);

    num = n;

    while (n > 0)
    {
        p = n % 10;
        sum = (sum * 10) + p;
        n = n / 10;
    }

    printf("The reverse of %d is %d", num, sum);
}