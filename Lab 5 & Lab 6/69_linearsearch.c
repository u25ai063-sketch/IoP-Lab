#include <stdio.h>

int main()
{
    int a[10], element, i, flag = 0;

    printf("Enter 10 elements of the Array:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements of the Array are:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\nWhich element are you looking for ?\n");
    scanf("%d", &element);

    for (i = 0; i < 10; i++)
    {
        if (a[i] == element)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("The element is present in the array,\nThe position of the element is %d,\nindex is %d", i + 1, i);
    }

    else
    {
        printf("The element is not present");
    }
}