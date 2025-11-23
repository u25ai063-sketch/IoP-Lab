// Left rotation of elements in array

#include <stdio.h>

int main()
{
    int n, i, temp, rotation;
    printf("Enter the length of array:\n");
    scanf("%d", &n);
    int a[n], b[n];

    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements of the array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    // sorting of array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nThe elements of array after sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\nEnter the number of rotations:\n");
    scanf("%d", &rotation);

    if (rotation > n)
    {
        rotation = rotation % n;
    }
    // rotation of array
    for (i = 0; i < rotation; i++)
    {
        b[i] = a[i];
    }

    for (i = rotation; i < n; i++)
    {
        a[i - rotation] = a[i];
    }

    for (i = n - rotation; i < n; i++)
    {
        a[i] = b[i - (n - rotation)];
    }

    printf("Array after rotations from left is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}