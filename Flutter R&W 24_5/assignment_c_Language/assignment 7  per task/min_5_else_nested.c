/* wap to find min. from given 5 no. using nested if else. */

#include <stdio.h>

void main()
{
    int a, b, c, d, e;

    printf("\nEnter the Value of a : ");
    scanf("%d", &a);
    printf("\nEnter the Value of b : ");
    scanf("%d", &b);
    printf("\nEnter the Value of c : ");
    scanf("%d", &c);
    printf("\nEnter the Value of d : ");
    scanf("%d", &d);
    printf("\nEnter the Value of e : ");
    scanf("%d", &e);

    printf("\n 1st Condition...... done\n");

    if (a < b)
    {
        if (a < c)
        {
            if (a < d)
            {
                if (a < e)
                {
                    printf("a : %d min", a);
                }
                else
                {
                    printf("e : %d min", e);
                }
            }
            else if (d < e)
            {
                printf("d : %d min", d);
            }
            else
            {
                printf("e : %d min", e);
            }
        }
        else if (c < d)
        {
            if (c < e)
            {
                printf("c : %d min", c);
            }
            else
            {
                printf("e : %d min", e);
            }
        }
        else if (d < e)
        {
            printf("d : %d min", d);
        }
        else
        {
            printf("e : %d min", e);
        }
    }
    else if (b < c)
    {
        if (b < d)
        {
            if (b < e)
            {
                printf("b : %d min", b);
            }
            else
            {
                printf("e : %d min", e);
            }
        }
        else if (d < e)
        {
            printf("d : %d min", d);
        }
        else
        {
            printf("e : %d min", e);
        }
    }
    else if (c < d)
    {
        if (c < e)
        {
            printf("c : %d min", c);
        }
        else
        {
            printf("e : %d min", e);
        }
    }
    else if (d < e)
    {
        printf("d : %d min", d);
    }
    else
    {
        printf("e : %d min", e);
    }
}
