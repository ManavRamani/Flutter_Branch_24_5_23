/* 3. Write C program to find out max from 4 numbers using nested if. */

#include <stdio.h>

void main()
{
    int n1, n2, n3, n4;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 >= n2)
    {
        if (n1 >= n3)
        {
            if (n1 >= n4)
            {
                printf("The maximum number is: %d\n", n1);
            }
            else
            {
                printf("The maximum number is: %d\n", n4);
            }
        }
        else
        {
            if (n3 >= n4)
            {
                printf("The maximum number is: %d\n", n3);
            }
            else
            {
                printf("The maximum number is: %d\n", n4);
            }
        }
    }
    else
    {
        if (n2 >= n3)
        {
            if (n2 >= n4)
            {
                printf("The maximum number is: %d\n", n2);
            }
            else
            {
                printf("The maximum number is: %d\n", n4);
            }
        }
        else
        {
            if (n3 >= n4)
            {
                printf("The maximum number is: %d\n", n3);
            }
            else
            {
                printf("The maximum number is: %d\n", n4);
            }
        }
    }

}
