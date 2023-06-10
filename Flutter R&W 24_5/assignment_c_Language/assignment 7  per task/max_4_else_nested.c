/* wap to find max. from given 4 no. using nested if else. */

#include <stdio.h>

void main()
{
    int a, b, c, d;

    printf("\nEnter the Value of a : ");
    scanf("%d", &a);
    printf("\nEnter the Value of b : ");
    scanf("%d", &b);
    printf("\nEnter the Value of c : ");
    scanf("%d", &c);
    printf("\nEnter the Value of d : ");
    scanf("%d", &d);

    printf("\n 1st Condition...... done\n");

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("a : %d is max value ", a);
            }
            else
            {
                printf("d : %d is max value", d);
            }
        }
        else if (c > d)
        {
            printf("c : %d is max value", c);
        }
        else
        {
            printf("d : %d is max value", d);
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("b : %d is max value", b);
        }
        else
        {
            printf("d : %d is max value", d);
        }
    }
    else if (c > d)
    {
        printf("c : %d is max value", c);
    }
    else
    {
        printf("d : %d is max value", d);
    }
}
