// C program to find the sum of odd and even no. netween 1 to N.

#include <stdio.h>

int main()
{
    int n, oddsum = 0, evensum = 0;

    printf("Enter a number:\n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            evensum += i;
        }
        else
        {
            oddsum += i;
        }
    }

    printf("The sum odd no. between 1 to %d is %d\n", n, oddsum);
    printf("The sum of even no. between 1 to %d is %d\n", n, evensum);
    return 0;
}