/* wap to find min. from given 3 no. using nested if else. */

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

    printf("\n 1st Condition...... done\n");
    if (a > b)
    {
        if (a > c)
        {
            if (b > c)
            {
                printf("c : %d is min value ", c);
            }
            else
            {
                printf("b : %d is min value", b);
            }
        }
        else
        {
            printf("b : %d is min value", b);
        }
    }
    else if (b > c)
    {
        if (a > c)
        {
            printf("c : %d is min value", c);
        }
        else
        {
            printf("a : %d is min value", a);
        }
    }
    else
    {
        printf("a : %d is min value", a);
    }

    printf("\n 2nd Condition...... done\n");

    if (a < b)
    {
        if (a < c)
        {
            printf("a : %d min", a);
        }
        else
        {
            printf("c : %d min", c);
        }
    }
    else if (b < c)
    {
        printf("b : %d min", b);
    }
    else
    {
        printf("c : %d min", c);
    }
}
