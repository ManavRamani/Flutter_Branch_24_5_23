/* wap to check Armstrong Number. using while loop. */

#include <stdio.h>

void main()
{
    int n, r, sum = 0, temp;

    printf("\nEnter the number : ");
    scanf("%d", &n);

    temp = n;

    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }

    if (temp == sum)
    {
        printf("\n%d : is armstrong  number", temp);
    }
    else
    {
        printf("\n%d : is not armstrong number", temp);
    }
}