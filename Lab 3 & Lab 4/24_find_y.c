#include <stdio.h>

int main()
{
    int x, y, n, result = 1; // y is the function of (x,n)

    printf("Enter the value of n:\n");
    scanf("%d", &n);

    printf("Enter the value of x:\n");
    scanf("%d", &x);

    switch (n)
    {
    case 1:
        y = 1 + x;
        printf("The value of y is %d", y);
        break;

    case 2:
        y = 1 + (x / n);
        printf("The value of y is %d", y);
        break;

    case 3:
        for (int i = 1; i <= n; i++)
        {
            result = result * x;
        }
        printf("The value of y is %d", 1 + result);
        break;

    default:
        y = 1 + n * x;
        printf("The value of y is %d", y);
        break;
    }

    return 0;
}