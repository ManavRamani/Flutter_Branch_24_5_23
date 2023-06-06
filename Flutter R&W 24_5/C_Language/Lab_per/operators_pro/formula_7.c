/* 7.WAP to find a the answer given formula (x+y+z)2. */

#include <stdio.h>

void main()
{
    int x, y, z, ans;

    printf("\n1.WAP to find a the answer given formula (x+y+z)2 : \n");

    printf("Enter Value of x : ");
    scanf("%d", &x);
    printf("Enter Value of y : ");
    scanf("%d", &y);
    printf("Enter Value of z : ");
    scanf("%d", &z);

    ans = (x + y + z) * (x + y + z);

    printf("\nAns is : %d\n", ans);
}
