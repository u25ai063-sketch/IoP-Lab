#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter the number of rocks:\n");
    scanf("%d", &n);

    char x[n][100];
    int alpha[26] = {0};
    int temp[26] = {0};
    int count = 0, i, j;

    for (int i = 0; i < n; i++)
    {
        scanf("%s", x[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int temp[26] = {0};
        for (int j = 0; j < strlen(x[i]); j++)
        {
            temp[(int)x[i][j] - 96] = 1;
        }
        for (int j = 0; j < 26; j++)
        {
            if (temp[j] == 1)
            {
                alpha[j]++;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] == n)
        {
            count++;
        }
    }

    printf("%d\n", count);
}