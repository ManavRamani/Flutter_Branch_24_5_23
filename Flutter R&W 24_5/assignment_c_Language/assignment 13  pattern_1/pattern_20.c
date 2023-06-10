/*
20.
    -
    | -
    - | -
    | - | -
    - | - | -

*/

#include <stdio.h>

void main()
{
    int i, j, num;

    for (i = 0; i <= 5; i++)
    {
        num = i + 1;
        for (j = 0; j < i; j++)
        {
            if (num % 2 == 0)
            {
                printf(" - ");
                num++;
            }
            else{
                printf(" | ");
                num++;
            }
        }
        printf("\n");
    }
}