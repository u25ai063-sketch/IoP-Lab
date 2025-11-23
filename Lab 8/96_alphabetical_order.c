#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter the number of strings:\n");
    scanf("%d", &n);

    char str[n][100], temp[100];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d string:\n", i + 1);
        scanf("%s[^/n]", &str[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("Sorted Strings:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }
}