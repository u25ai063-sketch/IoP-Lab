#include <stdio.h>
int check_prime(int x)
{
    int flag = 1;
    for (int i = 2; i < x / 2 && flag == 1; i++)
    {
        if (x % i == 0)
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    printf("%d", check_prime(a));
}