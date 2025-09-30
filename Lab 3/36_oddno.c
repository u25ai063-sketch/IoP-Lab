#include <stdio.h>

int main()
{

    int n;

    printf("Enter the range:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2)
    {
        printf("%d,\t", i);
    }
}