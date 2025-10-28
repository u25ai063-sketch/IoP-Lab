#include <stdio.h>
void traverse_sort(int b[], int k)
{
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &b[i]);
    }

    int temp;
    for (int i = 0; i < k - 1; i++)
    {
        for (int j = 0; j < k - i - 1; j++)
        {
            if (b[j] > b[j + 1])
            {
                temp = b[j + 1];
                b[j + 1] = b[j];
                b[j] = temp;
            }
        }
    }
    printf("\nSorted array:\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d\t", b[i]);
    }
}

void sort(int a[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

int main()
{
    int m, n;

    printf("Enter the lenght of A:\n");
    scanf("%d", &m);

    printf("\nEnter the lenght of B:\n");
    scanf("%d", &n);

    int a[m], b[n], c[m + n];

    printf("Enter the elements of array A:\n");
    traverse_sort(a, m);

    printf("Enter the elements of array B:\n");
    traverse_sort(b, n);

    for (int i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[m + i] = b[i];
    }
    printf("Merged and sorted array C:\n");
    sort(c, m + n);
}
