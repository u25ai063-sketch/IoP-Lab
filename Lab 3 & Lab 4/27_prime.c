// C program to check whether no. is prime or not.

#include <stdio.h>

int main()
{
    int n, flag = 1;

    printf("Enter an integral number:\n");
    scanf("%d", &n);

    for (int i = 2; i < n && flag == 1; i++)
    {

        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
}