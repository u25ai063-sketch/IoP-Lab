// C program to print specific number of terms of fibonacci
#include <stdio.h>

int main()
{

    int n, num1, num2, sum;
    num1 = 0;
    num2 = 1;

    printf("Enter the number of terms in the series:\n");
    scanf("%d", &n);

    for (int p = 1; p <= n; p++)
    {

        printf("%d\t", num1);
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }
}