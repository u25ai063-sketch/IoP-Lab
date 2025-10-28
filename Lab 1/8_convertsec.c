// A simple C program to convert Earth's period of revolution into Day, Hours and Minutes.
// Lab 1 Problem 8

#include<stdio.h>

int main(){
    int seconds = 31558150; // Period of revolution in seconds.
    float minutes = (seconds)/60; // Period of revolution in minutes.
    float hours = (minutes)/60; // Period of revolution in hours.
    float days = (hours)/24; // Period of revolution in days.

    printf("Time period of Earth in seconds is %d\n", seconds);
    printf("Time period of Earth in minutes is %.2f\n", minutes);
    printf("Time period of Earth in hours is %.2f\n", hours);
    printf("Time period of Earth in days is %.2f\n", days);

    return 0;
}