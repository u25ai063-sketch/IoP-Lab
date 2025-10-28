// A simple C program to convert farenheit to celcius
// Lab 1 Problem 4

#include<stdio.h>

int main(){
    float c, f;

    printf("Enter the temperature in Farenheit:\n");
    scanf("%f", &f);

    c = (f-32)*(5.0/9.0); // if it is written like: (f-32)*5.0/9.0 , the output will be same.
    printf("The value of temperature in Celcius is:%f\n", c);
    return 0;
}