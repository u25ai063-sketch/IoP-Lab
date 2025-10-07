// C program to find the amount of electricity bill.
#include <stdio.h>

int main()
{
    float units, amount;

    printf("Enter electricity consumed in units:\n");
    scanf("%f", &units);

    if (units > 0 && units <= 200)
    {
        amount = (units) * (0.50);
    }

    else if (units > 201 && units <= 400)
    {
        amount = 100 + (units - 200) * (0.65);
    }

    else if (units > 401 && units <= 600)
    {
        amount = 230 + (units - 400) * (0.80);
    }

    else
    {
        amount = 425 + (units - 600) * (1.25);
    }

    printf("Amount to be paid by the customer: Rs. %f", amount);
}