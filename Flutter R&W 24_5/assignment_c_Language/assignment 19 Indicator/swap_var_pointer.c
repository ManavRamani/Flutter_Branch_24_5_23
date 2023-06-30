/*
    6. WAP to swap two variables using Pointer :
*/

#include <stdio.h>
void swap(int *, int *);
void main()
{
    int a, b;
    printf("\n Enter a Value : ");
    scanf("%d", &a);
    printf("\n Enter b Value : ");
    scanf("%d", &b);

    printf("\n Before swapping :\n a = %d,\n b = %d\n", a, b);

    swap(&a, &b);

    printf("\n After swapping :\n a = %d,\n b = %d\n", a, b);
}
void swap(int *x, int *y)
{
    int m;
    m = *x;
    *x = *y;
    *y = m;
}
