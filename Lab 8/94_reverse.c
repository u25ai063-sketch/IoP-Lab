#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], revstr[100];
    int i;
    printf("Enter the original string :\n");
    gets(str);

    for (i = 0; i < strlen(str); i++)
    {
        revstr[(strlen(str) - 1) - i] = str[i];
    }
    revstr[i] = '\0';

    printf("The reverse of the string is:\n %s", revstr);
}