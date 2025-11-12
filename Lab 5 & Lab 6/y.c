#include <stdio.h>
#include <string.h>

int main()
{
    char msg[70];
    int count = 0;

    printf("Enter your msg: ");
    gets(msg);

    for (int i = 0; i < strlen(msg); i++)
    {
        if (msg[i] != ' ' && msg[i] != '\0')
        {
            count++;
        }
    }
    float x = 5 + (count - 10) * (1.25);
    if (count <= 10)
    {
        printf("Your charge is Rs. 5");
    }

    else if (count > 10)
    {
        printf("Your charge is Rs. %.2f", x);
    }
}