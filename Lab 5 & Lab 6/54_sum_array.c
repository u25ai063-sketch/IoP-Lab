#include <stdio.h>

int main()
{
    int a[10], sum = 0;

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
        sum = sum + a[i];
    }

    printf("\nSum of all elements are: %d", sum);
}