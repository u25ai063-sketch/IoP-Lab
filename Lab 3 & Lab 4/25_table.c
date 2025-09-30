#include<stdio.h>

int main(){
    int num,x;

    printf("Enter the number:\n");
    scanf("%d", &num);

    for(int i = 1; i<=10; i++){

        x=num*i;
        printf("%d*%d = %d\n", num, i, x);

    }
    return 0;
}