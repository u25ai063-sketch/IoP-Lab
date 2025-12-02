#include <stdio.h>
#include <stdlib.h>
void readinput(int *x[])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", *(x + i) + j);
        }
    }
}

void matrix(int *x[])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(x + i) + j));
        }
        printf("\n");
    }
}
int main()
{
    int *a[3], *b[3], *result[3];

    for (int i = 0; i < 3; i++)
    {
        a[i] = (int *)malloc(3 * sizeof(a));
        b[i] = (int *)malloc(3 * sizeof(b));
        result[i] = (int *)malloc(3 * sizeof(result));
    }
    printf("Enter the elements of first matrix:\n");
    readinput(a);

    printf("Enter the elements of second matrix:\n");
    readinput(b);

    printf("A matrix:\n");
    matrix(a);

    printf("B matrix:\n");
    matrix(b);

    printf("A*B matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            *(*(result + i) + j) = 0;
            for (int k = 0; k < 3; k++)
            {
                *(*(result + i) + j) += (*(*(a + i) + k)) * (*(*(b + k) + j));
            }
        }
    }
    matrix(result);
}