#include <stdio.h>

int main()
{
    int a[5], b[5];

    printf("Enter 5 elements of Array A:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The elements of Array A:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }

    for (int i = 4; i >= 0; i--)
    {
        b[4 - i] = a[i];
    }

    printf("\nThe reverse of Array A:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", b[i]);
    }
}