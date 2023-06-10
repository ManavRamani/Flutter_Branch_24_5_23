/* 9. WAP to calculate the factorial of N. using do while loop. */

#include <stdio.h>

void main()
{
    int n, fact = 1;

    printf("\nEnter a positive integer : ");
    scanf("%d", &n);

    printf("\nFactorial find : %d\n", n);

    if (n < 0)
    {
        printf("\nPls Enter Valid Number.....\n");
    }
    else
    {
        do
        {
            printf("\n%d = %d * %d\n", fact * n, fact, n);
            fact *= n;
            n--;
        } while (n > 0);

        printf("\nFactorial is : %d\n", fact);
    }
}
