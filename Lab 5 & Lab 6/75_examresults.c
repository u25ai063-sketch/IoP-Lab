#include <stdio.h>

int main()
{
    int s1[10], s2[10], s3[10], sum[10];
    int max1 = 0, max2 = 0, max3 = 0, r1, r2, r3, r_max, max = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the marks of roll no %d in subject 1, 2 and 3\n", i + 1);
        scanf("%d", &s1[i]);
        scanf("%d", &s2[i]);
        scanf("%d", &s3[i]);

        sum[i] = s1[i] + s2[i] + s3[i];

        if (s1[i] > max1)
        {
            max1 = s1[i];
            r1 = i + 1;
        }

        if (s2[i] > max2)
        {
            max2 = s2[i];
            r2 = i + 1;
        }
        if (s3[i] > max3)
        {
            max3 = s3[i];
            r3 = i + 1;
        }
        if (sum[i] > max)
        {
            max = sum[i];
            r_max = i + 1;
        }
    }

    printf("Roll no. Subject1 Subject2 Subject3 Total\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t   %d\t    %d\t     %d\t    %d\n", i + 1, s1[i], s2[i], s3[i], sum[i]);
    }
    printf("\nRoll no. %d has achieved maximum marks %d in Subject 1.\n", r1, max1);
    printf("Roll no. %d has achieved maximum marks %d in Subject 2.\n", r2, max2);
    printf("Roll no. %d has achieved maximum marks %d in Subject 3.\n", r3, max3);
    printf("Roll no. %d has topped the class with total %d marks!", r_max, max);
}