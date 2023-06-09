/* 7. WAP to Find leap year from 2000 to 3000 using while loop. */

#include <stdio.h>

void main()
{
    int y = 2000;

    printf("\nLeap years from 2000 to 3000 : \n");

    while (y <= 3000)
    {
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
        {
            printf("%d\n", y);
        }
        y++;
    }
}
