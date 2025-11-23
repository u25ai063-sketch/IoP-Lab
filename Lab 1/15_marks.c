// A C program to read marks of five subject and print grade and division
// Lab 1 Problem 15

#include<stdio.h>

int main(){
    int phy, math, chem, eng, cs; // cs is computer science

    printf("Enter the marks obtained in Physics (out of 100):\n");
    scanf("%d", &phy);

    printf("Enter the marks obtained in Mathematics (out of 100):\n");
    scanf("%d", &math);

    printf("Enter the marks obtained in Chemistry (out of 100):\n");
    scanf("%d", &chem);

    printf("Enter the marks obtained in English (out of 100):\n");
    scanf("%d", &eng);

    printf("Enter the marks obtained in Computer Science (out of 100):\n");
    scanf("%d", &cs);

    float x = (phy + chem + math + eng + cs)/5.0;

    /*
    if x is between,
    90-100 : AA: First divison
    80-90 : AB: Second Divison
    60-80 : BB: Third Divison
    35-60 : BC: Fourth Divison
    below 35: XX: Failed
    */

    printf("Obtained Marks:%.2f\n", x);

    if(x>=90 && x<=100){
        printf("You have passed with AA grade\n");
        printf("Division: First division");
    }

    else if(x>=80 && x<90){
        printf("You have passed with AB grade\n");
        printf("Division: Second division");
    }

    else if(x>=60 && x<80){
        printf("You have passed with BB grade\n");
        printf("Division: Third division");
    }

    else if(x>=35 && x<60){
        printf("You have passed with BC grade\n");
        printf("Division: Fourth division");
    }

    else{
        printf("Your grade is XX\n");
        printf("You have failed!\n");
    }
    return 0;
}