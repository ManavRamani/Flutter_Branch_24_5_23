/* wap to to find max. from given 2 no, using ternary operator : */

#include<stdio.h>

void main()
{
    int n1,n2;

    printf("\nEnter the 1st Value : ");
    scanf("%d",&n1);
    printf("\nEnter the 2nd Value : ");
    scanf("%d",&n2);
 
    n1 > n2 ? printf("\n%d : 1st value is big value",n1) : printf("\n%d : 2nd value is big value",n2); 

}
