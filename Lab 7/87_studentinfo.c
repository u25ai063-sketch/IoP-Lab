#include <stdio.h>

struct student_info
{
    char name[30];
    int roll_no;
    int marks;
} x, ai[10];

int marks(int marks)
{
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (ai[i].marks >= 500)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int x;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the name of roll no %d: ", i + 1);
        gets(ai[i].name);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the marks of roll no %d: ", i + 1);
        scanf("%d", &ai[i].marks);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The name of roll no %d:\n", i + 1);
        puts(ai[i].name);
        printf("The marks of roll no %d: %d", i + 1, ai[i].marks);
    }

    printf("The number of students with higher than 500 marks are %d", marks(x));
}