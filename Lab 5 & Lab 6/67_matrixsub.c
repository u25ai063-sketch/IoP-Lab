#include <stdio.h>

int main()
{
    int m, n, i, j;
    printf("Enter the order of the matrix:");
    scanf("%d%d", &m, &n);
    int a[m][n], b[m][n], c[m][n];

    printf("Enter the elements of A matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("A matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the elements of B matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nB matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction of A and B is:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", c[i][j] = a[i][j] - b[i][j]);
        }
        printf("\n");
    }
}