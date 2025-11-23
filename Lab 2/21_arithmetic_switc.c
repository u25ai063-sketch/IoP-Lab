#include<stdio.h>

int main(){

    char operator;
    int i,j, answer;

    printf("Enter the arithmetic operator:\n");
    scanf("%c", &operator);
    
    printf("Enter the first operand:\n");
    scanf("%d", &i);
    
    printf("Enter the second operand:\n");
    scanf("%d", &j);


    switch (operator)
    {
    case '+':
        answer = i + j;
         printf("Answer of your operation is %d", answer);
        break;

    case '-':
        answer = i - j;
         printf("Answer of your operation is %d",answer);
        break;

    case '*':
        answer = i * j;
         printf("Answer of your operation is %d",answer);
        break;

    case '/':
        answer = i / j;
         printf("Answer of your operation is %d",answer);
        break;
    
    }

    return 0;
}