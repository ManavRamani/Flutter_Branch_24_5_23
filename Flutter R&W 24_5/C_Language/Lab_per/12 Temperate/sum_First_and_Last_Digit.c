/* 4. Write C program to find sum of first and last digit of a number. */

#include <stdio.h>

void main()
{
    int number, f_d, l_d, sum;

    printf("\nEnter a number : ");
    scanf("%d", &number);

    // Extracting the first digit
    f_d = number;

    while (f_d >= 10)
    {
        f_d /= 10;
    }

    // Extracting the last digit
    l_d = number % 10;

    // Calculating the sum
    sum = f_d + l_d;

    printf("\nSum of first and last digit : %d\n", sum);
}
