#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], revstr[100];
    int i;
    printf("Enter the string :\n");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    char *ptr = str;

    for (int i = 0; i < len - 1; i++)
    {
        revstr[(len - 2) - i] = *ptr;
        ptr++;
    }
    revstr[len - 1] = '\0';

    printf("The reverse of the string is:%s\n", revstr);
}