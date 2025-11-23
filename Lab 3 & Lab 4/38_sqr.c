#include <stdio.h>

int main()
{
    int n;

    printf("Enter the range of number:\n");
    scanf("%d", &n);

    for (int p = 1; p <= n; p++)
    {
        printf("%d,\t", p * p);
    }
}