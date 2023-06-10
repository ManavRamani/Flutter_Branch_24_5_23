/* 7. WAP to Find leap year from 2000 to 3000 using for loop. */

#include <stdio.h>

void main()
{
    int y;

    printf("\nLeap years from 2000 to 3000 : \n");

    for (y = 2000; y <= 3000; y++)
    {
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
        {
            printf("%d\n", y);
        }
    }
}
