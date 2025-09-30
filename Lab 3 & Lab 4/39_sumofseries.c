#include <stdio.h>

int main()
{

    int n, fact = 1;
    float sum = 0;

    printf("Enter an integral number:\n");
    scanf("%d", &n);

    for (float i = 1; i <= n; i++)
    {
        fact = fact * i;
        sum = sum + (i / fact);
    }

    printf("The sum of the series is: %f", sum);
}