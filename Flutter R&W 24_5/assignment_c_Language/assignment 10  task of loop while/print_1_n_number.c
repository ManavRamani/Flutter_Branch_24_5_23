/* 3. WAP to print 1 to N using while loop. */

#include <stdio.h>

void main()
{
    int i = 1, n;

    printf("\nEnter Number : ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
}