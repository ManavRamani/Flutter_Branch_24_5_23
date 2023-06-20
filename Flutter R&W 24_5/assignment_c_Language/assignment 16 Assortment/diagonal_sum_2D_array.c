/*
    6-WAP to perform diagonal sum of 2D array :-
*/

#include <stdio.h>

void main() 
{
    int r, c, i, j, sum = 0;

    printf("Enter the number of rows : ");
    scanf("%d", &r);

    printf("Enter the number of columns : ");
    scanf("%d", &c);

    int matrix[r][c];

    printf("\nEnter the elements of the matrix:\n");

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("index[%d][%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }

    printf("\nThe diagonal sum is : %d\n", sum);

}
