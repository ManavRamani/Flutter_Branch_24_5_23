/* wap to swap two variable (without using third variable) */

#include<stdio.h>

void main()
{
    int a,b;

    printf("Enter a value : ");
    scanf("%d",&a);
    printf("Enter b value : ");
    scanf("%d",&b);

    printf("\nBefore :-> a : %d \t b : %d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nAfter swap :-> a : %d \t b : %d\n",a,b);

}