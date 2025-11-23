#include <stdio.h>

int main()
{
    int i = 1;
    int product = 1;
    int n;

    printf("Enter any positive integral number:\n");
    scanf("%d", &n);

    do
    {
        product *= i;
        i++;
    } while (i <= n);

    printf("The factorial of %d is %d", n, product);
    return 0;
}