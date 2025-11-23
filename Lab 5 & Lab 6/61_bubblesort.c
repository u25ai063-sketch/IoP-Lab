#include <stdio.h>

int main()
{
    int a[5], temp;

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

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
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