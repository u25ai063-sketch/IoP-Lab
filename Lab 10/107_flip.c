#include <stdio.h>

int flip(int n, int k)
{
    int rev = 0;
    for (int i = 0; i < k; i++)
    {
        rev = (rev * 10) + (n % 10);
        n = n / 10;
    }

    int mul = 1;
    for (int j = 0; j < k; j++)
    {
        mul = mul * 10;
    }

    return (n * mul) + rev;
}

int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);

    printf("How many last digits to flip?:\n");
    int k;
    scanf("%d", &k);

    printf("The number after flipping last %d digits is:%d\n", k, flip(num, k));
}