#include <stdio.h>

int main()
{
    int a[10], b[10], result[10];

    printf("Enter 10 elements of Array A:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter 10 elements of Array B:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("The elements of Array A:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\nThe elements of Array B:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", b[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        result[i] = a[i] + b[i];
    }

    printf("\nSum of Array A and B is:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", result[i]);
    }
}