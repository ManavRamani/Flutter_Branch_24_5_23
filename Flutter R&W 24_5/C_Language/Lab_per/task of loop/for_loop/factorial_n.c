/* 9. WAP to calculate the factorial of N. using for loop. */

#include <stdio.h>

void main()
{
    int n, fact = 1, i;

    printf("\nEnter a positive integer : ");
    scanf("%d", &n);

    printf("\nFactorial find : %d\n", n);

    for (int i = 1; i <= n; ++i)
    {
        printf("\n%d = %d * %d\n", fact * i, fact, i);
        fact *= i;
    }
    printf("\nFactorial is : %d\n", fact);
}
