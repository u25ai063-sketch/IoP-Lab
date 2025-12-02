#include <stdio.h>
#include <string.h>

int main()
{
    int n, flag = 0, pivot, successor;
    scanf("%d", &n);
    char w[n][100], w_temp[n][100];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", w[i]);
    }

    for (int i = 0; i < n; i++)
    {
        strcpy(w_temp[i], w[i]);

        for (int j = strlen(w[i]) - 1; j > 0; j--)
        {
            if (w[i][j - 1] < w[i][j])
            {
                pivot = j - 1;
                break;
            }
        }

        for (int k = strlen(w[i]) - 1; k > pivot; k--)
        {
            if (w[i][k] > w[i][pivot])
            {
                successor = k;
                break;
            }
        }

        char t = w[i][pivot];
        w[i][pivot] = w[i][successor];
        w[i][successor] = t;

        int start = pivot + 1;
        int end = strlen(w[i]) - 1;
        while (start < end)
        {
            char temp = w[i][start];
            w[i][start] = w[i][end];
            w[i][end] = temp;
            start++;
            end--;
        }
        if (strcmp(w_temp[i], w[i]) == 0)
        {
            printf("no answer\n");
        }
        else
        {
            printf("%s\n", w[i]);
        }
    }
}