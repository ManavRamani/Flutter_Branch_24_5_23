/* wap to find factorial. using for loop. */

#include <stdio.h>

void main()
{
    int i, fact = 1, number;

    printf("\nEnter a number: ");
    scanf("%d", &number);
    
    for (i = 1; i <= number; i++)
    {
        printf("\n%d * %d : %d\n",fact,i,fact*i);
        fact = fact * i;
    }
    
    printf("\nFactorial of %d is: %d", number, fact);

}