#include <stdio.h>

int main()
{

    int n, i, j, max = 0, min = 999999999;

    printf("Enter the range of numbers:\n");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    int num[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("The numbers are:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t", num[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }

        if (num[i] < min)
        {
            min = num[i];
        }
    }

    printf("\nThe max no. from above is %d\n", max);
    printf("The second max no. from above is %d\n", min);
}