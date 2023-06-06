/* 4.WAP to find a the answer given formula (x-y)3. */

#include <stdio.h>

void main()
{
    int x, y, ans;

    printf("\n1.WAP to find a the answer given formula (x-y)3 : \n");

    printf("Enter Value of x : ");
    scanf("%d", &x);
    printf("Enter Value of y : ");
    scanf("%d", &y);

    ans = (x - y) * (x - y) * (x - y);

    printf("\nAns is : %d\n", ans);
}
