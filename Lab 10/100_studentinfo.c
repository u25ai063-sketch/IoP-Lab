#include <stdio.h>

typedef struct
{
    char name[50];
    int rollno;
    float marks;
} Student;

int main()
{

    int n;
    printf("Enter the no. of students:\n");
    scanf("%d", &n);
    Student data[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the student %d name: ", i + 1);
        scanf("%s", data[i].name);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter the roll no of %d student: ", i + 1);
        scanf("%d", &data[i].rollno);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter the marks of %d student: ", i + 1);
        scanf("%f", &data[i].marks);
    }

    FILE *fp;
    fp = fopen("LNMIITSTUDENT.java", "w");

    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "Student %d:\nName: %s\nRoll no.: %d\nMakrs:%.2f\n\n", i + 1, (data + i)->name, (data + i)->rollno, (data + i)->marks);
    }

    fclose(fp);
}