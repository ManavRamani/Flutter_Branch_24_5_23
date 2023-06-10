/* 3. WAP to print 1 to N using for loop. */

#include <stdio.h>

void main()
{
    int i, n;

    printf("\nEnter Number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
        i++;
    }
}