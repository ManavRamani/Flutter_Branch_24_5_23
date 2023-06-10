/* 2. Write C program to check a number is even or odd using ternary operator. */

#include <stdio.h>

void main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    (number % 2 == 0) ? printf("The number is even : %d.\n",number) : printf("The number is odd : %d.\n",number);

}
