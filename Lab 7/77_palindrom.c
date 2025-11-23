#include <stdio.h>

void palindrom(int a)
{
    int p, sum = 0, n;
    n = a;

    for (int i = 0; n > 0;)
    {
        p = n % 10;
        sum = (sum * 10) + p;
        n = n / 10;
    }

    if (sum == a)
    {
        printf("%d is a palindrom number", sum);
    }
    else
    {
        printf("%d is not a palindrom number", a);
    }
}
int main()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d", &x);
    palindrom(x);
}