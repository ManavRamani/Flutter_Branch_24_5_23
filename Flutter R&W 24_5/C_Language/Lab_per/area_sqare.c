/* wap to find area of sqare */

#include<stdio.h>

void main()
{
    int h_w,area;

    printf("\n Enter Higth/width Any One of Sqare : ");
    scanf("%d",&h_w);

    // heigth = width are same....
    // area = heigth * width -> formula of sqare
    area = h_w * h_w;

    printf(" Area of the square : %d\n",area);
    
}