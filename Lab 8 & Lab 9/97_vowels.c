#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, vowel = 0;
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);

    while (*(str + i) != '\0')
    {
        switch (*(str + i))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'O':
        case 'I':
        case 'U':
            vowel++;
        }
        i++;
    }

    printf("No. of vowels in the given string is %d\n", vowel);
}