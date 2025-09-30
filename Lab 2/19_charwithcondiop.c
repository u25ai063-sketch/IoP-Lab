#include<stdio.h>

int main(){
    char c;

    printf("Enter a character:\n");
    scanf("%c", &c);

    (c>='a' && c<='z') ? printf("Entered character is a small case letter"):
    printf("Entered character is not a small case letter");
    return 0;
}