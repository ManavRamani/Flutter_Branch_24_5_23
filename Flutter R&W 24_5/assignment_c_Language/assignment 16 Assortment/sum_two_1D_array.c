/*
    2-WAP to find perform addition of two 1D array & store it into another.
*/

#include <stdio.h>

void main()
{
    int s;

    printf("\nEnter the size of Array : ");
    scanf("%d", &s);

    int array1[s], array2[s], sum[s];

    printf("\nEnter the Index of the 1st array value : \n");
    for (int i = 0; i < s; i++)
    {
        printf("index[%d] : ", i);
        scanf("%d", &array1[i]);
    }

    printf("\nEnter the elements of the 2nd array : \n");
    for (int i = 0; i < s; i++)
    {
        printf("index[%d] : ", i);
        scanf("%d", &array2[i]);
    }

    printf("\nSum of the arrays:\n");
    for (int i = 0; i < s; i++)
    {
        sum[i] = array1[i] + array2[i];
        printf("index[%d] : %d\n", i, sum[i]);
    }
}
