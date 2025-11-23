// A C program to swap two variables without using thrid variable
// Lab 1 Problem 6

#include<stdio.h>

int main(){
    int a = 6;
    int b = 7;

    printf("The value of a is %d and the value of b is %d\n", a, b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("Now the value of a and b is %d and %d\n", a,b);
    return 0;
}