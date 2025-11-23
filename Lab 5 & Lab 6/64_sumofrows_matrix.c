#include <stdio.h>

int main()
{
    int a[3][3], sum, i, j;

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

    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            sum += a[i][j];
        }
        printf("The sum of the elements of row %d is %d\n", i + 1, sum);
    }
}