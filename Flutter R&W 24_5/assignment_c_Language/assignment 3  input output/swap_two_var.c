/* wap to Swap two variables (with sing third variable) */

#include<stdio.h>

void main()
{
    int a,b,c;

    printf("\nEnter a Value : ");
    scanf("%d",&a);
    printf("\nEnter b value : ");
    scanf("%d",&b);

    printf("\nBefore :-> a : %d \t b : %d\n",a,b);

    c=a;
    a=b;
    b=c;

    printf("After swap :->a : %d \t b : %d",a,b);
          
}
