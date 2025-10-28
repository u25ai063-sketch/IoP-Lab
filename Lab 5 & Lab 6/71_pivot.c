#include <stdio.h>

int main()
{
    int a[10] = {60, 70, 80, 90, 100, 10, 20, 30, 40, 50};

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }

    int i = 0; // first index
    int j = 9; // last index

    while (i < j)
    {
        int mid = (i + j) / 2;

        if (a[mid] > a[j])
        {
            i = mid + 1;
        }

        else
        {
            j = mid;
        }
    }

    printf("\nThe pivot index of array is %d and the element is %d", i, a[i]);
}