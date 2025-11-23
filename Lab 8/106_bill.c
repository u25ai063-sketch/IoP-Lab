#include <stdio.h>

struct item
{
    char item_name[100];
    int quantity;
    float price;
    float amount;
} x;
int main()
{
    printf("Enter the item name:\n");
    gets(x.item_name);

    printf("Enter the quantity:\n");
    scanf("%d", &x.quantity);

    printf("Enter the price of the item:\n");
    scanf("%f", &x.price);

    x.amount = (x.quantity) * (x.price);
    printf("The item name is %s\n", x.item_name);
    printf("The no of items is %d\n", x.quantity);
    printf("The price of one item is %.2f\n", x.price);
    printf("The total amount is %.2f\n", x.amount);
}