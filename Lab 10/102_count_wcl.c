#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("xyz.txt", "r");
    int count_char = 0;
    int count_word = 0;
    int count_line = 0;
    char c;

    while ((c = fgetc(fp)) != EOF)
    {
        count_char++;
        if (c == ' ' || c == '\t')
        {
            ++count_word;
        }
        if (c == '\n')
        {
            ++count_line;
        }
    }

    printf("Characters: %d\nWords: %d\nLines: %d\n", count_char, count_word, count_line);
}