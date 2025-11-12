#include <stdio.h>

struct book_info
{
    char author[40];
    char bookName[50];
    char publisherName[100];
    char language[20];
    char datePublished[11];
} x;

int main()
{

    printf("Enter the name of the book:\n");
    gets(x.bookName);
    printf("Enter the name of the author:\n");
    gets(x.author);
    printf("Enter the name of the publisher:\n");
    gets(x.publisherName);
    printf("Enter the language of the book:\n");
    gets(x.language);
    printf("Enter the publication date (DD/MM/YYYY):\n");
    gets(x.datePublished);

    printf("The name of the book:\n");
    puts(x.bookName);
    printf("The name of the author:\n");
    puts(x.author);
    printf("The name of the publisher:\n");
    puts(x.publisherName);
    printf("The language of the book:\n");
    puts(x.language);
    printf("The publication date (DD/MM/YYYY):\n");
    puts(x.datePublished);
}