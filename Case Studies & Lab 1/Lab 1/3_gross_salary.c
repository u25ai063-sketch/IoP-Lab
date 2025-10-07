// A simple C program to calculate gross salary
// Lab 1 Problem 3

#include<stdio.h>

int main()
{
    int bs; // bs is base salary
    int hra; // hra is house rent allowence
    int bns; // bns is bonuses
    int perks; // perks consists of travel and medical allowences

    printf("Enter your base salary:\n");
    scanf("%d", &bs);

    printf("Enter your House Rent Allowence:\n");
    scanf("%d", &hra);

    printf("Enter your yearly bonus:\n");
    scanf("%d", &bns);

    printf("Enter your other perks:\n");
    scanf("%d", &perks);

    int gs = bs+hra+bns+perks;

    printf("Your gross salary is %d", gs);
    
    return 0;
}