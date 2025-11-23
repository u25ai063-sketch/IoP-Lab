#include <stdio.h>

int main()
{
    int a[5], temp, i, j;

    printf("Enter 5 elements of Array A:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The elements of Array A before sorting:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nThe elements of Array A after sorting:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
}