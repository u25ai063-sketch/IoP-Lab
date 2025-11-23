#include <stdio.h>
#include <string.h>

int main()
{
    int count[256] = {0};
    char x[100];

    printf("Enter the string:\n");
    gets(x);

    for (int i = 0; i < strlen(x); i++)
    {
        count[(int)x[i]]++;
    }

    for (int i = 0; i < strlen(x); i++)
    {
        printf("The occurence of %c is %d\n", x[i], count[(int)x[i]]);
    }
}