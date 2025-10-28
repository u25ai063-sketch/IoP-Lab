#include <stdio.h>

int main()
{
    int count[6] = {0, 0, 0, 0, 0, 0}, i, max = 0, elected = 0; // i = candidate number

    for (int j = 1; j <= 11; j++)
    {
        printf("Ballot %d:\n", j);
        printf("Enter the candidate number:\n");
        scanf("%d", &i);

        if (i > 0 && i < 6)
        {
            count[i] = count[i] + 1;
        }
        else
        {
            count[0] = count[0] + 1;
        }
    }

    for (int j = 1; j < 6; j++)
    {
        if (count[j] > max)
        {
            max = count[j];
            elected = j;
        }
    }

    printf("Elected candidate is no %d with %d votes\n", elected, max);
    printf("No of votes in spoiled ballot are: %d", count[0]);
}