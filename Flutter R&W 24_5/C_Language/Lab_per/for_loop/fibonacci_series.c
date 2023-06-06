/* wap to find fibonacci series, without using recursion */

#include <stdio.h>

void main()
{
    int num1 = 0, num2 = 1, num3, i, number;

    printf("\nEnter the number : ");
    scanf("%d", &number);

    // printing 0 & 1
    printf("\n \t%d\t%d", num1, num2);

    // loop starts from 2 because 0 and 1 are already printed 
    for(i=2;i<number;i++)
    {
        num3=num1+num2;
        printf("\t%d",num3);
        num1=num2;
        num2=num3;

    }

}
