/*
    3. C program to reverse an array using pointers :
*/

#include <stdio.h>

void main()
{
    int a[5], *m, i;
    for (i = 0; i < 5; i++)
    {
        printf("\n Enter Element i[%d] : ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n i[%d] = %d\n", i, a[i]);
    }

    printf("\n Print Reverse Array Element using pointer : \n");
    m = &a[5-1];

    for (i = 0; i < 5; i++)
    {
        printf("\n %d\n", *m--);
    }
}