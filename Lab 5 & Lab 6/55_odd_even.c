#include <stdio.h>

int main()
{
    int a[10], sum = 0, odd = 0, even = 0;

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
        if (a[i] % 2 == 0)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }

    printf("\nTotal number of odd and even elements are %d and %d\n", odd, even);
}