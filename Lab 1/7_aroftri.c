// Program to calculate area of triangle
//Lab 1 Problem 7

#include<stdio.h>

int main(){
    int base,height;

    printf("Enter the value of base of the triangle:\n");
    scanf("%d", &base);

    printf("Enter the value of height of the triangle:\n");
    scanf("%d", &height);

    float area = 0.5*base*height;
    printf("The area of given triangle is %f\n", area);
    return 0;
}