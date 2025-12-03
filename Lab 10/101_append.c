#include <stdio.h>

typedef struct
{
    char name[50];
    int rollno;
    float marks;
} Student;

int main()
{
    FILE *fp;
    Student data;
    fp = fopen("LNMIITDATA.dat", "a");

    printf("Enter the student informtion:\n");
    printf("Name: ");
    scanf("%s", data.name);
    printf("Roll no.: ");
    scanf("%d", &data.rollno);
    printf("Marks: ");
    scanf("%f", &data.marks);

    fprintf(fp, "Student name: %s\nStudent roll no.: %d\nStudent marks:%.2f\n\n", data.name, data.rollno, data.marks);

    printf("Student data is appened succesfully!");

    fclose(fp);
}