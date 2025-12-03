#include <stdio.h>

int str_len(char x[])
{
    int len = 0;
    while (x[len] != '\0')
    {
        ++len;
    }
    return len;
}

int main()
{
    char str1[100], revstr[100], cpystr[100], concat[100], temp[100];
    int len, i = 0, j = 0, flag = 0;

    printf("Enter a string:\n");
    scanf("%s", str1);

    // A. Copy one string into another
    while (str1[i] != '\0')
    {
        cpystr[i] = str1[i];
        ++i;
    }

    cpystr[i] = '\0';
    printf("Copied string: %s\n", cpystr);
    
    // D. Reverse of Given string str1
    len = str_len(str1);
    char *ptr = str1;

    for (int i = 0; i < len; i++)
    {
        revstr[((len - 1) - i)] = *ptr;
        ptr++;
    }
    revstr[len] = '\0';

    printf("The reverse of the string is:%s\n", revstr);
    
    char str2[100];
    printf("Enter the second string :");
    scanf("%s", str2);

    // B. Compare two strings str1 and str2

    i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
        ++i;
    }
    if (flag == 0 && str1[i] == '\0' && str2[i] == '\0')
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }

    while (str2[i] != '\0')
    {
        concat[j] = str2[i];
        ++i;
        ++j;
    }

    printf("Concatenated string is: %s\n", concat);

}