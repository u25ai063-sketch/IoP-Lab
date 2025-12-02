#include <stdio.h>

typedef struct
{
    char name[50];
    int id;
    float salary;
} employee;

int main()
{
    int n;
    printf("Enter the the number of employee:\n");
    scanf("%d", &n);
    employee data[n];
    employee *ptrdata = data;

    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of no.%d employee: ", i + 1);
        scanf("%s", &((ptrdata + i)->name));
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the id of no.%d employee: ", i + 1);
        scanf("%d", &((ptrdata + i)->id));
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter the salary of no.%d employee: ", i + 1);
        scanf("%f", &((ptrdata + i)->salary));
    }

    for (int i = 0; i < n; i++)
    {
        printf("Employee %d\n", i + 1);
        printf("Name: %s\n", ptrdata->name);
        printf("ID: %d\n", ptrdata->id);
        printf("Basic Pay: %.2f\n", ptrdata->salary);
        ptrdata++;
    }
}