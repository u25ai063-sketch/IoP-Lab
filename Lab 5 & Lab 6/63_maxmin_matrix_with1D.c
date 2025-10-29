#include <stdio.h>

int main()
{
    int a[3][3], flat_a[9], i, j, temp; // i= row, j= column

    printf("Enter the elements of 3*3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("3*3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Converting Matrix into 1D array
    int k = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            flat_a[k++] = a[i][j];
        }
    }

    // Sorting of 1D array

    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 9; j++)
        {
            if (flat_a[i] > flat_a[j])
            {
                temp = flat_a[i];
                flat_a[i] = flat_a[j];
                flat_a[j] = temp;
            }
        }
    }

    // Converting 1D array into Matrix
    k = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            a[i][j] = flat_a[k++];
        }
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n The max number in the matrix is %d", a[2][2]);
    printf("\n The min number in the matrix is %d", a[0][0]);
}