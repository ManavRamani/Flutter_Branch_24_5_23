/* 9. WAP to calculate the factorial of N. using while loop. */

#include <stdio.h>

void main()
{
    int n, fact = 1;

    printf("\nEnter a positive integer : ");
    scanf("%d", &n);

    printf("\nFactorial find : %d\n",n);

    if (n < 0)
    {
        printf("\nPls Enter Valid Number.....\n");
    }
    else
    {
        while (n > 0)
        {
            printf("\n%d = %d * %d\n", fact * n, fact, n);
            fact *= n;
            n--;
        }

        printf("\nFactorial is : %d\n",fact);
    }
}
