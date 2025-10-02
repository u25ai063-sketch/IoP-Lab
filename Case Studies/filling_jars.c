#include <stdio.h>

int main()
{
    int N, M, i, j, q, sum = 0;
    scanf("%d %d", &N, &M);

    int p[N];

    for (i = 0; i < N; i++)
    {
        p[i] = 0;
    }

    for (i = 0; i < M; i++)
    {
        int a, b, k;
        scanf("%d %d %d", &a, &b, &k);

        for (j = a - 1; j <= b - 1; j++)
        {
            p[j] = p[j] + k;
        }
    }

    for (q = 0; q < N; q++)
    {
        sum = sum + p[q];
    }

    printf("Total:%d\n", sum);
    printf("Average:%d", sum / N);
}