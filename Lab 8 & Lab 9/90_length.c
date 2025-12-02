#include <stdio.h>
int stlen_space(char x[])
{
    int count = 0, y = 0;
    while (*(x + y) != '\0')
    {
        count++;
        y++;
    }
    return count;
}
int stlen_char(char x[])
{
    int count = 0, y = 0;
    while (*(x + y) != '\0')
    {
        if (*(x + y) != ' ')
        {
            count++;
        }
        y++;
    }
    return count;
}
int main()
{
    char string[100];

    printf("Enter the string:\n");
    fgets(string, sizeof(string), stdin);

    puts(string);

    printf("The lenght of the string including space is %d\n", stlen_space(string));
    printf("The lenght of the string excludind space is %d", stlen_char(string));
}
