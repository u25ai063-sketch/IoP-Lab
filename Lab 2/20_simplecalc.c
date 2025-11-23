#include<stdio.h>

int main(){

    char operator;
    int a,b, result;

    printf("Enter the operator:\n");
    scanf("%c", &operator);
    
    printf("Enter the first operand:\n");
    scanf("%d", &a);
    
    printf("Enter the second operand:\n");
    scanf("%d", &b);


    switch (operator)
    {
    case '+':
        result = a + b;
         printf("Result of your operation is %d", result);
        break;

    case '-':
        result = a - b;
         printf("Result of your operation is %d", result);
        break;

    case '*':
        result = a * b;
         printf("Result of your operation is %d", result);
        break;

    case '/':
        result = a / b;
         printf("Result of your operation is %d", result);
        break;

    default:
            printf("Invalid  input");
    }

    return 0;
}