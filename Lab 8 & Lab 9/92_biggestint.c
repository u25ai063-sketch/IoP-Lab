#include <stdio.h>

int main()
{
    int n, max = 0;
    int *maxptr = &max;

    printf("How many int do you want me to read ?\n");
    scanf("%d", &n);

    int x[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (x + i));
    }

    for (int i = 0; i < n; i++)
    {
        if (*(x + i) > *maxptr)
        {
            maxptr = (x + i);
        }
    }

    printf("The biggest number is %d", *(maxptr));
}