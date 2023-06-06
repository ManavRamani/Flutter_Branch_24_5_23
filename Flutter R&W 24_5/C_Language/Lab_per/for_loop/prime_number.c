/* wap to find the prime number.take an input from the user and check whether the number is prime or not */

#include <stdio.h>

void main()
{
    int n, i, m = 0, flag = 0;

    printf("\nEnter the number to check prime or not : ");
    scanf("%d", &n);

    m = n / 2;

    for (i = 2; i < m; i++)
    {
        if (n % i == 0)
        {
            printf("Number is not prime");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Number is prime");
    }
}