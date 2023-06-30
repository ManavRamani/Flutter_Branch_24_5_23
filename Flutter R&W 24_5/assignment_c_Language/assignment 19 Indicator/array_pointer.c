/*
    2. C program to input and print array elements using pointers :
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

    printf("\n Using Pointert Print Array Element : \n");
    m = &a[0];

    for (i = 0; i < 5; i++)
    {
        printf("\n *m[%d] = %d\n", i, *m++);
    }
}