/*
    4-WAP to perform row-wise sum of 2D array :-
*/

#include <stdio.h>

void main()
{
    int r, c;
    printf("\nEnter the number of rows : ");
    scanf("%d", &r);
    printf("\nEnter the number of columns : ");
    scanf("%d", &c);

    int arr[r][c];

    printf("\nEnter the array elements : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("index[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nSum Row wise :\n");
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, sum);
    }
}
