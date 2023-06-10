/* wap to find area of circle */

#include<stdio.h>

void main() 
{
   float pie = 3.14,area;
   int radius;

   printf("Enter The Radius of Cicle : ");
   scanf("%d",&radius);
   printf("The radius of the circle is %d\n" , radius);

   //pi = 3.14
   //area = PI * (radius)^2 -> formula of circle... 
   area = (pie* radius * radius);
   printf("The area of the given circle is %f", area);
   
}