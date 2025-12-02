#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp, *fp1;
    char ch;
    int vowel_count = 0;
    fp = fopen("/media/pavitra-kalola/New Volume/lab10_99.txt", "r");
    fp1 = fopen("/media/pavitra-kalola/New Volume/lab10_99_vowels.txt", "w");

    if (fp == NULL)
    {
        printf("Error");
    }
    if (fp1 == NULL)
    {
        printf("Error");
    }

    while ((ch = getc(fp)) != EOF)
    {
        ch = toupper(ch);
        switch (ch)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            vowel_count++;
            putc(ch, fp1);
        }
    }
    printf("Number of vowels: %d\n", vowel_count);
    fclose(fp);
    fclose(fp1);
}