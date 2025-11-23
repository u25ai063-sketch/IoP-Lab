// C program to read all the nos. till negative and add those nos.
#include <stdio.h>

int main()
{
    int i = 0, len = 0, sum = 0;
    int num[i];

    for (i = 0; i >= 0; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] < 0)
        {
            break;
        }
        len++;
    }

    printf("Entered numbers are:\n");

    for (i = 0; i < len; i++)
    {
        printf("%d\t", num[i]);
    }

    for (i = 0; i < len; i++)
    {
        sum += num[i];
    }

    printf("\nThe sum of above numbers is %d", sum);
}