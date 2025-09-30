#include<stdio.h>

int main(){
    int a, b, c;

    printf("Enter the value of a:\n");
    scanf("%d", &a);

    printf("Enter the value of b:\n");
    scanf("%d", &b);

    printf("Enter the value of c:\n");
    scanf("%d", &c);

    (a==b && b==c) ? printf("All numbers are same\n"):
        ((a>=b && a>=c) ? printf("The greatest number is:%d", a):
        ((b>=a && b>=c) ? printf("The greatest number is:%d", b):
        printf("The greates number is:%d",c)));
        
    return 0;
}