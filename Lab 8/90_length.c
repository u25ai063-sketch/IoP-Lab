#include <stdio.h>
int stlen_space(char x[])
{
    int count = 0, y = 0;
    while (x[y] != '\0')
    {
        count++;
        y++;
    }
    return count;
}
int stlen_char(char x[])
{
    int count = 0, y = 0;
    while (x[y] != '\0')
    {
        if (x[y] != ' ')
        {
            count++;
        }
        y++;
    }
    return count;
}
int main()
{
    char name[20];

    printf("Enter the name of person:\n");
    gets(name);

    printf("Hello, ");
    puts(name);

    printf("The lenght of the string including space is %d\n", stlen_space(name));
    printf("The lenght of the string excludind space is %d", stlen_char(name));
}
