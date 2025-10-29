#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];

    printf("Enter the name of person:\n");
    gets(name);

    printf("Hello, ");
    puts(name);

    printf("The lenght of the string is:%d", strlen(name));
}