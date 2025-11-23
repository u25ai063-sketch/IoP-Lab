#include <stdio.h>
#include <ctype.h>

void scan_line(char line[], int *pv, int *pc, int *pd, int *pw, int *po)
{
    char c;
    int count = 0;

    while ((c = toupper(line[count])) != '\0')
    {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')

            ++*pv;

        else if (c > 'A' && c <= 'Z')

            ++*pc;

        else if (c >= '0' && c <= '9')

            ++*pd;

        else if (c == ' ' || c == '\t')

            ++*pw;

        else

            ++*po;

        ++count;
    }
    return;
}

int main()
{
    char line[80];
    int vowel = 0,
        consonants = 0,
        digits = 0,
        whitespace = 0,
        other = 0;

    printf("Enter a line of text within 80 character limit:\n");
    scanf("%[^\n]", line);

    scan_line(line, &vowel, &consonants, &digits, &whitespace, &other);

    printf("The no. of vowels is %d\n", vowel);
    printf("The no. of consonants is %d\n", consonants);
    printf("The no. of digits is %d\n", digits);
    printf("The no. of whitespace is %d\n", whitespace);
    printf("The no. of other characters (colon, fullstop etc.) is %d\n", other);
}