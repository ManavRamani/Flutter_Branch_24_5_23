/*
    3-WAP to find perform addition of two 2D array & store it into another.
*/

#include <stdio.h>

void main()
{
    int s1, s2;

    printf("\nEnter the 'I' size of Array : ");
    scanf("%d", &s1);
    printf("\nEnter the 'J' size of Array : ");
    scanf("%d", &s2);

    int array1[s1][s2], array2[s1][s2], sum[s1][s2];

    printf("\nEnter the Index of the 1st array value : \n");
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            printf("index[%d][%d] : ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }

    printf("\nEnter the elements of the 2nd array : \n");
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            printf("index[%d][%d] : ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    printf("\nSum of the arrays:\n");
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            sum[i][j] = array1[i][j] + array2[i][j];
            printf("index[%d][%d] : %d\n", i ,j ,sum[i][j]);
        }
    }

}
