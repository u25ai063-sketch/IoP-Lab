#include <stdio.h>
int fact(int x)
{
    int product = 1;
    for (int i = 1; i <= x; i++)
    {
        product *= i;
    }
    return product;
}
int main()
{
    int n, r;
    printf("Enter the value of n:\n");
    scanf("%d", &n);

    printf("Enter the value of r:\n");
    scanf("%d", &r);

    printf("The value of %dC%d is %d", n, r, (fact(n)) / (fact(r) * fact(n - r)));
}