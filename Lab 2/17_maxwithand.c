#include<stdio.h>

int main(){
    int a, b, c;

    printf("Enter first number:\n");
    scanf("%d", &a);

    printf("Enter second number:\n");
    scanf("%d", &b);

    printf("Enter third number:\n");
    scanf("%d", &c);

    if(a==b && b==c){
        printf("All numbers are same");
    }

    else if(a>=b && a>=c){
        printf("The greatest number is:%d", a);
    }

    else if(b>=a && b>=c){
        printf("The greatest number is:%d", b);
    }

    else if(c>=a && c>=b){
        printf("The greatest number is:%d", c);
    }

    return 0;
}