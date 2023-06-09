/* 6. WAP to print even no. from N to 1 using while loop. */

#include <stdio.h>

void main()
{
    int i = 1, n;

    printf("\nEnter the value of n : ");
    scanf("%d", &n);

    printf("\nEven numbers from 1 to %d : \n", n);

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf(" %d ", i);
        }
        i++;
    }
}
