// A simple C program to check whether given number is odd or even
// Lab 1 Problem 13

#include<stdio.h>

int main(){
    
    int number;

    printf("Enter a number:\n", number);
    scanf("%d", &number);

    if((number%2)==0){

        printf("Given number is an even number");
    }
    else{
        
        printf("Given number is a odd number");
    }
    return 0;
}