/*
    5. WAP to find square of each element using Pointer :
*/

#include <stdio.h>
void square(int *);
void main()
{
    int a[5], *m, i;

    for (i = 0; i < 5; i++)
    {
        printf("\n a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n a[%d] : %d", i, a[i]);
    }

    square(a);

    printf("\n square : \n");
    for (i = 0; i < 5; i++)
    {
        printf("\n a[%d] : %d ",i ,*(a + i));
    }
}
void square(int *a)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        *(a + i) = *(a + i) * *(a + i);
    }
}