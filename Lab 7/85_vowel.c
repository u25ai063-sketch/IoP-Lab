#include <stdio.h>
void check_vowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'u' || x == 'o' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
    {
        printf("%c is a vowel", x);
    }
    else
    {
        printf("%c is not a vowel", x);
    }
}
int main()
{
    char n;
    printf("Enter an alphabet:\n");
    scanf("%c", &n);
    check_vowel(n);
}