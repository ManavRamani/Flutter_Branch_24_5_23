/* 3. WAP to print 1 to N using do while loop. */

#include <stdio.h>

void main()
{
    int i = 1, n;

    printf("\nEnter Number : ");
    scanf("%d", &n);

    do
    {
        printf("%d\n", i);
        i++;
    }while (i <= n);
}