/*
2.  1
    2 1
    3 2 1
    4 3 2 1
    5 4 3 2 1
 */

#include <stdio.h>

void main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        // i=1 ,2<=5
        for (j = i; j >= 1; j--)
        {
            // j=1 , 1>=1 ,1
            printf("%d ", j);   
        }
        printf("\n");
    }
}
