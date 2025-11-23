#include <stdio.h>
#include <math.h>
/*The answer of 153 is not armstrong because
 pow (5,3)=124.999999999 which turnicates to 124 in integer.
*/
void armstrong(int a)
{
    int p, i, r, sum = 0;

    p = a;
    r = a;

    for (i = 0; a > 0; i++)
    {
        a = a / 10;
    }

    for (int q; p > 0;)
    {
        q = p % 10;
        sum = pow(q, i) + sum;
        p = p / 10;
    }

    if (r == sum)
    {
        printf("%d number is an armstrong number", sum);
    }

    else
    {
        printf("%d number is not an armstrong number", r);
    }
}
int main()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d", &x);
    armstrong(x);
}