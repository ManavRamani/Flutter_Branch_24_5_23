/* wap to return max value */

#include<stdio.h>

void main()
{
    int a,b,c,d,e;

    printf("\nEnter a value : ");
    scanf("%d",&a);
    printf("\nEnter b value : ");
    scanf("%d",&b);
    printf("\nEnter c value : ");
    scanf("%d",&c);
    printf("\nEnter d value : ");
    scanf("%d",&d);
    printf("\nEnter e value : ");
    scanf("%d",&e);

    if (a > b && a > c && a > d && a > e)
    {
        printf("a : %d is bigger..",a);
    }
    else if (b > c && b > d && b > e)
    {
        printf("b : %d is bigger..",b);
    }
    else if (c > d && c > e)
    {
        printf("c : %d is bigger..",c);
    }
    else if (d > e)
    {
        printf("d : %d is bigger..",d);
    }
    else
    {
        printf("e : %d is bigger..",e);
    }
    
}

