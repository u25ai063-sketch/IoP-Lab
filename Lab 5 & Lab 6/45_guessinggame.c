#include <stdio.h>

int main()
{
    int num = 63;
    int x, count;

    for (int count = 1; count < 100; count++)
    {
        printf("\nGuess the number: ");
        scanf("%d", &x);
        printf("Number of attempts is %d\n", count);
        if (x == num)
        {
            printf("You have guessed it right !!");
            break;
        }
        else if (x > num)
        {
            printf("Guessed number is higher\n");
        }
        else if (x < num)
        {
            printf("Guessed number is lower\n");
        }
    }
}