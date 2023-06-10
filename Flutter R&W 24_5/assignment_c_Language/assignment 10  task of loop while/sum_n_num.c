/* 8. WAP to print sum 1 to N using while loop. */

#include <stdio.h>

void main()
{
    int i = 1, n, ans = 0;

    printf("\nEnter Number : ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("\n%d = %d + %d ", ans + i, ans, i);
        ans += i;
        i++;
    }
    printf("\nSum is : %d", ans);
}