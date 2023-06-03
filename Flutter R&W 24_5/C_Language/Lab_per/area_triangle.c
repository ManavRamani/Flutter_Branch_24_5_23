/* wap to find area of Triangle */

#include<stdio.h>

void main()
{
    int h,b;
    float area;

    printf("\n Enter heigth of Triangle : ");
    scanf("%d",&h);
    printf("\n Enter Base of Triangle : ");
    scanf("%d",&b);
    
    // area = (base * heigth)/2 ->Formula of triangle...
    area=(b*h)/2;
    
    printf(" Area of the Triangle : %f\n",area);

}