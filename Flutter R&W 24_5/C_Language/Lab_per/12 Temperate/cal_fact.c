/* 5. Write C program to calculate factorial of a number. */

#include <stdio.h>

void main()
{
    int num, i, fact = 1;

    printf("\nEnter Positive Number : ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("\nInvalid Number..!! Pls Retry..!!\n");
    }
    else
    {
        for (i = 1; i <= num; ++i)
        {
            printf("\nfact of %d => %d * %d : %d\n", num, fact, i, fact * i);
            fact *= i;
        }

        printf("\nfact of %d = %d", num, fact);
    }
}
