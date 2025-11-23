// A simple C program to check what character is given
// Lab 1 Problem 14

#include<stdio.h>

int main(){
    
    char x;

    printf("Enter a character: \n");
    scanf("%c", &x);

    if(x>=33 && x<=47 || x>=58 && x<=64 || x>=91 && x<=96 || x>=123 && x<=126){

        printf("Given character is a special symbol");
    }
    else if(x>=48 && x<=57){

        printf("Given character is a number");
    }
    else if(x>=65 && x<=90){

        printf("Given character is an upercase alphabet");
    }
    else if(x>=97 && x<=122){

        printf("Given character is a lowercase alphabet");
    }

    return 0;
}