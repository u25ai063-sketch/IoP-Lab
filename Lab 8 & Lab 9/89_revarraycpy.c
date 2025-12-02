#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10];

    for (int i = 0; i < 10; i++)
    {
        *(b + (9 - i)) = *(a + i); // By definition array is treated as pointer.
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(b + i));
    }
}