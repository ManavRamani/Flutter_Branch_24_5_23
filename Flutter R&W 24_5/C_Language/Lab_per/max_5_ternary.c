/* wap to to find max. from 4 using ternary operator : */

#include<stdio.h>

void main()
{
    int a,b,c,d,e;

    printf("\nEnter the Value of a : ");
    scanf("%d",&a);
    printf("\nEnter the Value of b : ");
    scanf("%d",&b);
    printf("\nEnter the Value of c : ");
    scanf("%d",&c);
    printf("\nEnter the Value of d : ");
    scanf("%d",&d);
    printf("\nEnter the Value of e : ");
    scanf("%d",&e);        
 
    a > b ? printf("\n%d : a value is big value",a) : b > c ? printf("\n%d : b value is big value",b) : c > d ? printf("\n%d : c value is big value",c) : d > e ? printf("\n%d : d value is big value",d) : printf("\n%d : e value is big value",e); 

}
