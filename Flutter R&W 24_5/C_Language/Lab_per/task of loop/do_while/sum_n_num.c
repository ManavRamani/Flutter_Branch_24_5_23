/* 8. WAP to print sum 1 to N using do while loop. */

#include <stdio.h>

void main()
{
    int i = 1, n, ans = 0;

    printf("\nEnter Number : ");
    scanf("%d", &n);

    do
    {
        printf("\n%d = %d + %d ", ans + i, ans, i);
        ans += i;
        i++;
    } while (i <= n);
    printf("\nSum is : %d", ans);
}