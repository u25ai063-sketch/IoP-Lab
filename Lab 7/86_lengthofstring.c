#include <stdio.h>
// #include <string.h>

int stlen(char x[])
{
    int count = 0, y = 0;
    while (x[y] != '\0')
    {
        count++;
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

    printf("The lenght of the string is %d", stlen(name));
}
//     printf("The lenght of the string is:%d", strlen(name));
// }