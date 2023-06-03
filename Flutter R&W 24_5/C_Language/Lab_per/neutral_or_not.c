/* wap to find is a number is neutral or not using ladder if else */

#include <stdio.h>

void main()
{
    int number;

    printf("\nEnter Any number : ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("\nThe number is positive : %d\n", number);
    }
    else if (number < 0)
    {
        printf("\nThe number is negative : %d\n", number);
    }
    else
    {
        printf("\nThe number is neutral : %d\n", number);
    }
}