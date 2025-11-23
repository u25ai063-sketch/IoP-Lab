// Swap two variable using third variable
// Lab 1 Problem 5

#include<stdio.h>

int main(){
    int a,b,c;
    a = 69;
    b = 96;

    printf("The value of a and b is %d and %d\n", a,b);

    c = a;
    a = b;
    b = c;

    printf("Now the value of a and b is %d and %d", a,b);

    
    return 0;
}