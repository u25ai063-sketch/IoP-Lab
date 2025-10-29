#include <stdio.h>
void max(int x[], int n)
{
    int max = 0;
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    printf("Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", x[i]);

        if (x[i] > max)
        {
            max = x[i];
        }
    }

    printf("\nThe maximum element is:%d", max);
}
int main()
{
    int length;
    printf("Enter the length of the array:\n");
    scanf("%d", &length);
    int a[length];

    max(a, length);
}