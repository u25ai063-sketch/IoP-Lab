#include <stdio.h>
#include <string.h>

int main()
{
    char string[100], word = 1;
    printf("Enter a sentence:\n");
    gets(string);

    int i = 0;
    while (string[i] != '\0')
    {
        switch (string[i])
        {
        case ' ':
        case '\t':
        case '\n':
            word++;
        }
        i++;
    }
    printf("No. of words in the string is: %d", word);
}