#include <stdio.h>

int main()
{

    int n, num1, num2, sum;
    num1 = 0;
    num2 = 1;

    printf("Enter the number:\n");
    scanf("%d", &n);

    while (num2 <= n)
    {
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }

    if (num1 == n)
    {
        printf("IsFibo\n");
    }
    else
    {
        printf("IsNotFibo");
    }
}