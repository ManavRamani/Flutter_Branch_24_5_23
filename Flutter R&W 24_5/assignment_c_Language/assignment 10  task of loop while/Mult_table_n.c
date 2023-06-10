/* 10. WAP to print the multiplication table of N using while loop. */

#include <stdio.h>

void main()
{
    int i = 1, n;

    printf("\nEnter a number : ");
    scanf("%d", &n);

    printf("\nMultiplication Table of %d : \n", n);

    while (i <= 10)
    {
        printf("\t%d x %d = %d\n", n, i, n * i);
        i++;
    }
}
