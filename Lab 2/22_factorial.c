#include<stdio.h>

int main(){
    int n, product=1;

    printf("Enter a positive integral number:\n");
    scanf("%d", &n);

    for (int i = 1; i<=n; i++)
    {
        product*=i;
    }
   printf("Factorial of %d is %d", n, product);

        return 0;
}