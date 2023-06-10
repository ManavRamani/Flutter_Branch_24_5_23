/*
17.
    1
    1 0
    1 0 1
    1 0 1 0
    1 0 1 0 1
*/

#include <stdio.h>

void main()
{
    int i, j, num;

    for (i = 1; i <= 5; i++)
    {
        num = i;
        for (j = 1; j <= num; j++)
        {
            printf("%d ", j % 2);
        }
        printf("\n");
    }
}
