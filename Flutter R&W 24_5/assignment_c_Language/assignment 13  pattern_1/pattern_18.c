/*
15.
    0
    0 1
    0 1 0
    0 1 0 1
    0 1 0 1 0
*/

#include <stdio.h>

void main()
{
    int i, j, num;

    for (i = 0; i <= 5; i++)
    {
        num = i;
        for (j = 0; j < num; j++)
        {
            printf("%d ", j % 2);
        }
        printf("\n");
    }
}
