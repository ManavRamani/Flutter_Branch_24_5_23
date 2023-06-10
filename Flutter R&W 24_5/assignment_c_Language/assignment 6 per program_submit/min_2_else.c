/* wap to find min. from given 2 no. using if else. */

#include <stdio.h>

void main()
{
    int a, b;

    printf("\nEnter the Value of a : ");
    scanf("%d", &a);
    printf("\nEnter the Value of b : ");
    scanf("%d", &b);

    if(a < b)
    {
        printf("%d : a is Min value",a);
    }
    else
    {
        printf("%d : b is Min value",b);
    }

}