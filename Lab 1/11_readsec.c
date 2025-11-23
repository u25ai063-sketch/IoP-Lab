// A C programm to read total second and convert it into time
// Lab 1 Problem 11

#include<stdio.h>

int main(){
    int totalsecond;
    
    printf("Enter time in second:\n");
    scanf("%d", &totalsecond);

    int hour, minute, second;
    hour = (totalsecond)/3600;
    totalsecond = (totalsecond)%3600;

    minute = (totalsecond)/60;
    second = (totalsecond)%60;
    printf("Current time is:%02d:%02d:%02d", hour, minute, second);

    return 0;
}