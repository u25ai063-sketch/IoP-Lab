#include <stdio.h>

int main()
{
    int num;
    int *numptr = &num;

    printf("Enter any number:\n");
    scanf("%d", numptr);

    int sqr = (*(numptr)) * (*(numptr));
    printf("Square of the entered number is %d\n", sqr);
    printf("Cube of the entered number is %d\n", (sqr) * (*(numptr)));
}