/* 4. WAP to print N to 1 using while loop. */

#include <stdio.h>

void main()
{
    int i = 1, n;

    printf("\nEnter Number : ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", n);
        n--;
    }
}