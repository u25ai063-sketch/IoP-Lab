#include <stdio.h>
#include <math.h>

int main()
{
    int a[3][3], max = 0, min = pow(10, 9);

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

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }

    printf("The maximum element in the array is %d\n", max);
    printf("The minimum element in the array is %d", min);
}