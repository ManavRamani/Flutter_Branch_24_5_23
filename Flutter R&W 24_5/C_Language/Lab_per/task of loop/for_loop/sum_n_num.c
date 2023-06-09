/* 8. WAP to print sum 1 to N using for loop. */

#include <stdio.h>

void main()
{
    int i, n, ans = 0;

    printf("\nEnter Number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\n%d = %d + %d ", ans + i, ans, i);
        ans += i;
    }
    printf("\nSum is : %d", ans);
}