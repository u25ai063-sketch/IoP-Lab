// A simple C program to calculate total marks and percentage obtained in 5 subjects by a student
// Lab 1 Problem 2

#include<stdio.h>

int main(){
    float phy, chem, math, eng, cs;
    
    printf("Enter the marks obtained in Physics:\n");
    scanf("%f", &phy);

    printf("Enter the marks obtained in Chemistry:\n");
    scanf("%f", &chem);

    printf("Enter the marks obtained in Maths:\n");
    scanf("%f", &math);

    printf("Enter the marks obtained in English:\n");
    scanf("%f", &eng);

    printf("Enter the marks obtained in Computer Science:\n");
    scanf("%f", &cs);

    float x = phy+chem+math+eng+cs;

    printf("Total marks obtained:%.2f\n", x);
    printf("Total percentage:%.2f", (x/500)*100);

    return 0;
}