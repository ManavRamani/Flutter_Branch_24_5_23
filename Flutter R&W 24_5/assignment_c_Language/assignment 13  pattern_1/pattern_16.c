/*
16.
    1 0 1 0 1
    0 1 0 1
    1 0 1
    0 1
    1
*/

#include <stdio.h>

void main()
{
    int i, j, num;

    for (i = 0; i < 5; i++)
    {
        num = i + 1;
        for (j = 0; j < 5-i; j++)
        {
            printf("%d ", num % 2);
            num++;
        }
        printf("\n");
    }

}
