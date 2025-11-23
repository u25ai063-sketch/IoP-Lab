#include<stdio.h>

int main(){
    int base,exponent,result = 1;

    printf("Enter the value of base: \n");
    scanf("%d", &base);

    printf("Enter the value of exponent: \n");
    scanf("%d", &exponent);

    for(int i = 1; i<=exponent; i++){
        result = result*base;
    }
    printf("%d^%d is %d", base, exponent, result);
    return 0;
}