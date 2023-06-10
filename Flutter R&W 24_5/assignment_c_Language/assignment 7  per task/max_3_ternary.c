/* wap to to find max. from 3 using ternary operator : */

#include <stdio.h>

void main()
{
    int a, b, c;

    printf("\nEnter the Value of a : ");
    scanf("%d", &a);
    printf("\nEnter the Value of b : ");
    scanf("%d", &b);
    printf("\nEnter the Value of c : ");
    scanf("%d", &c);

    a > b ? printf("\n%d : a value is big value", a) : b > c ? printf("\n%d : b value is big value", b)
                                                             : printf("\n%d : c value is big value", c);
}
