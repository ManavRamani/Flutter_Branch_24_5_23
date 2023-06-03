/* wap to find area of Rectangle */

#include<stdio.h>

void main()
{
    int h,w,area;

    printf("\n Enter heigth of rectangle : ");
    scanf("%d",&h);
    printf("\n Enter width of rectangle : ");
    scanf("%d",&w);

    // area = heigth * width -> formula of rectangle
    area = h * w;
    
    printf(" Area of the rectangle : %d\n",area);

}