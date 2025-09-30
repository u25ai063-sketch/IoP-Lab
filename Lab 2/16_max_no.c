#include<stdio.h>

int main(){
    int a, b, c;

    printf("Enter the value of first number:\n");
    scanf("%d", &a);

    printf("Enter the value of second number:\n");
    scanf("%d", &b);

    printf("Enter the value of third number:\n");
    scanf("%d", &c);

     if(a==b && b==c){
        printf("All number are same",a);
    }
    else if(a>b){
        if(a>c){
            printf("Greatest number is = %d", a);
        }
        else{
            printf("Greatest number is = %d", c);
        }
    }

    else if(b>=c){
        printf("Greatest number is = %d", b);
    }

    else if(c>=b){
        printf("Greatest number is = %d", c);
    }
    return 0;
}