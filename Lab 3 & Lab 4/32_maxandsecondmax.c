#include <stdio.h>

int main()
{

    int n, i, j, temp;

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

    // Loop to sort the entered numbers.
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (num[i] > num[j])
            {
                temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }

    printf("\nThe max no. from above is %d\n", num[n - 1]);
    printf("The second max no. from above is %d\n", num[n - 2]);
}