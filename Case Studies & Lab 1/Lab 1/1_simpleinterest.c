// A simple C program to calculate simple interest
// Lab 1 Problem 1

#include <stdio.h>

int main()
{
    float i, r, t;
    printf("Enter the rate of interest:\n", i);
    scanf("%f", &i);

    printf("Enter the annual interest rate:\n", r);
    scanf("%f", &r);

    printf("Enter the time in years:\n", t);
    scanf("%f", &t);

    printf("The simple interest is:%f\n", (i * r * t) / 100);

    return 0;
}