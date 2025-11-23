#include <stdio.h>

int main()
{
    int k, i, target, count = 0;
    printf("Enter the lenght of array:\n");
    scanf("%d", &k);

    int a[k];
    printf("Enter %d elements of the array:\n", k);
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements of the array are:\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d\t", a[i]);
    }

    for (int j = 1; j > 0; j++)
    {
        printf("\nEnter the target element:\n");
        scanf("%d", &target);

        count = 0;
        for (i = 0; i < k; i++)
        {
            if (a[i] == target)
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("The target doesn't exist.");
            break;
        }
        else
        {
            printf("%d occurs %d times.", target, count);
        }
    }
}