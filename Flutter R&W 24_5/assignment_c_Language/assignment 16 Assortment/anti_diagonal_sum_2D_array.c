/*
    7-WAP to perform anti-diagonal sum of 2D array :-
*/

#include <stdio.h>

void main()
{
    int s1;

    printf("\nEnter the size of Array : ");
    scanf("%d", &s1);

    int i, j, arrNum[s1][s1], sum = 0;

    printf("\nEnter the Index of the 1st array value : \n");
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s1; j++)
        {
            printf("index[%d][%d] : ", i, j);
            scanf("%d", &arrNum[i][j]);
        }
    }

    for (i = 0; i < s1; i++)
    {
        for (j = 0; j < s1; j++)
        {
            if (i + j == s1 - 1)
            {
                sum += arrNum[i][j];
            }
        }
    }

    printf("The anti-diagonal sum is: %d\n", sum);
}