/*

            1
          1 2
        1 2 3
      1 2 3 4
    1 2 3 4 5
      2 3 4 5
        3 4 5
          4 5
            5
*/

#include <stdio.h>

void main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf("   ");
        }
        for (k = 1; k <= i; k++)
        {
            printf(" %d ", k);
        }
        printf("\n");
    }
    for (int i = 2; i <= 5; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("   ");
        }
        for (int k = i; k <= 5; k++)
        {
            printf(" %d ", k);
        }

        printf("\n");
    }
}