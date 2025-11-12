#include <stdio.h>

int main()
{
    int a[4], b[4], c[4];
    a[0] = b[0] = c[0] = 0;

    printf("Enter the first number:\n");
    for (int i = 1; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the second number:\n");
    for (int i = 1; i < 4; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("The first number:\n");
    for (int i = 1; i < 4; i++)
    {
        printf("%d", a[i]);
    }

    printf("The second number:\n");
    for (int i = 1; i < 4; i++)
    {
        printf("%d", b[i]);
    }

    printf("The sum of both number is: ");
    for (int i = 3; i >= 0; i--)
    {
        c[i] = a[i] + b[i];
        if (c[i] > 9)
        {
            c[i] %= 10;
            a[i - 1]++;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d", c[i]);
    }
}