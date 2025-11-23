#include <stdio.h>

int main()
{
    int p, num, q, sum = 0;

    printf("Enter a number:\n");
    scanf("%d", &num);

    q = num;

    while (q > 9)
    {
        sum = 0;
        while (num > 0)
        {
            p = num % 10;
            sum += p;
            num = num / 10;
        }
        q = sum;
        num = sum;
    }
    printf("Single digit sum is %d", sum);
}