/* 2. Write C program to print multiplication table of any number. */

#include <stdio.h>

void main()
{
    int number, i;

    printf("\nEnter a number : ");
    scanf("%d", &number);

    printf("Multiplication table of %d : \n", number);

    for (i = 1; i <= 10; i++)
    {
        printf("\t%d x %d = %d\n", number, i, number * i);
    }
}
