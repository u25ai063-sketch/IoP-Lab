#include <stdio.h>

int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }

    else
        return (fib(n - 1) + fib(n - 2));
}
int itration(int n)
{
    int num1 = 0,
        num2 = 1;
    for (int i = 0; i < n - 1; i++)
    {
        num2 = num1 + num2;
        num1 = num2 - num1;
    }

    return num1;
}
int main()
{
    int n;
    printf("Enter the number of terms:\n");
    scanf("%d", &n);
    printf("Using iteration:%d\n", itration(n));
    printf("\nUsing recursion:%d", fib(n));
}