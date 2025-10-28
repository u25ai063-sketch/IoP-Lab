// A C programm to read time in hr, min, sec and convert it into total second
// Lab 1 Problem 9

#include<stdio.h>

int main(){
    int hour, minute, second;

    printf("Enter the value of hour: \n");
    scanf("%d", &hour);

    printf("Enter the value of minute: \n");
    scanf("%d", &minute);

    printf("Enter the value of second: \n");
    scanf("%d", &second);

    minute += second/60;
    second = second % 60;

    hour += minute/60;
    minute = minute % 60;
    
    printf("Current time is %02d:%02d:%02d \n", hour, minute, second);

    int totalsecond = (hour)*3600 + (minute)*60 + second;
    printf("Current time is second is %d", totalsecond);
    
    return 0;
}