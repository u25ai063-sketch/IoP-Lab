#include <stdio.h>

int main()
{
    int v;
    int *vptr;
    vptr = &v;

    printf("Assign a value to v: ");
    scanf("%d", &v);

    printf("Value of v is :%d\n", v);

    printf("Assign value to *vptr: ");
    scanf("%d", vptr);

    printf("\nNow value of v:%d and vptr:%d\n", v, *vptr);
}