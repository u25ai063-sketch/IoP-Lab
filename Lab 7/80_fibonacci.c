#include <stdio.h>

void fibonacci(int x)
{
    int num1, num2, sum;

    num1 = 0;
    num2 = 1;
    for (int p = 1; p <= x; p++)
    {

        printf("%d\t", num1);
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }
}
int main()
{
    int x;
    printf("Enter the number of terms:\n");
    scanf("%d", &x);
    fibonacci(x);
}