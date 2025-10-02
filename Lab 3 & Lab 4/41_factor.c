#include <stdio.h>

int main()
{
    int n;

    printf("Enter any non zero positive number: ");
    scanf("%d", &n);

    printf("Factors of %d is:", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d, ", i);
        }
    }
}