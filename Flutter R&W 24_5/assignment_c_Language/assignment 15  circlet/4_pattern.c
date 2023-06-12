/*

1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

*/

#include <stdio.h>

void main()
{
    int i, j;

    // i=2,2<=5,3=2+1....
    for (i = 1; i <= 5; i++)
    {
        // j=2 ,2>=1,1=2-1,...,j=1 ,1>=1,0=1-1...,,0>=1 X
        for (j = i; j >= 1; j--)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }
}