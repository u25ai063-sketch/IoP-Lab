#include <stdio.h>
#define BIG(a, b) ((a > b) ? a : b)
int main()
{
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("Biggest number is :%d\n", BIG(x, y));
}