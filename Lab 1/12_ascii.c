// A C program to print ASCII code of any character
// Lab 1 Problem 12

#include<stdio.h>

int main(){
    
    char x;

    printf("Enter any character: \n");
    scanf("%c", &x);

    printf("The ASCII code of given character %c is %d", x, x);
    return 0;
}