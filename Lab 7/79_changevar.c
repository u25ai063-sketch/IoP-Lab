#include <stdio.h>

void swap(int x, int y)
{
    int temp;
    printf("The value of x and y before swaping is %d and %d", x, y);
    temp = x;
    x = y;
    y = temp;

    printf("\nThe value of x and y after swaping is %d and %d", x, y);
}

int main()
{
    int x, y;
    printf("Enter the value of x:\n");
    scanf("%d", &x);

    printf("Enter the value of y:\n");
    scanf("%d", &y);

    swap(x, y);
}