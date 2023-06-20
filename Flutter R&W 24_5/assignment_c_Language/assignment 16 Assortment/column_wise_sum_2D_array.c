/*
    4-WAP to perform columns-wise sum of 2D array :-
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

    printf("\nSum Column wise :\n");
    for (int j = 0; j < c; j++)
    {
        int sum = 0;
        for (int i = 0; i < r; i++)
        {
            sum += arr[i][j];
        }
        printf("Sum of Column %d : %d\n", j + 1, sum);
    }
}
