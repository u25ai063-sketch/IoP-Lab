#include <stdio.h>
void even_odd(int a)
{
    if (a % 2 == 0)
    {
        printf("%d is even number", a);
    }
    else
    {
        printf("%d is odd number", a);
    }
}
int main()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d", &x);
    even_odd(x);
}