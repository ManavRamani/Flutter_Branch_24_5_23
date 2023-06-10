/* 5. WAP to print odd no. from 1 to N using for loop. */

#include <stdio.h>

void main()
{
    int i, n;

    printf("\nEnter the value of n : ");
    scanf("%d", &n);

    printf("\nOdd numbers from 1 to %d : \n", n);

    for (i=1; i<= n;i++)
    {
        if (i % 2 != 0)
        {
            printf(" %d ", i);
        }
    }
}
