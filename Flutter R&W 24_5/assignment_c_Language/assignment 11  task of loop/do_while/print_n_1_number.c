/* 4. WAP to print N to 1 using do while loop. */

#include <stdio.h>

void main()
{
    int i = 1, n;

    printf("\nEnter Number : ");
    scanf("%d", &n);

    do
    {
        printf("%d\n", n);
        n--;
    }while (i <= n);
}