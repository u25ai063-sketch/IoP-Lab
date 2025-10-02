#include <stdio.h>

int main()
{
    int a[10], sum = 0, positive = 0, negative = 0, zero = 0;

    printf("Enter 10 elements in array:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements in array are:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (a[i] > 0)
        {
            positive++;
        }
        else if (a[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("\nTotal no. of positive elements are: %d", positive);
    printf("\nTotal no. of negative elements are: %d", negative);
    printf("\nTotal no. of zero elements are: %d\n", zero);
}