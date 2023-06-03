/* wap to Perimeter of circle */

#include<stdio.h>

void main() 
{

    float radius, perimeter, area, pi=3.14;

    printf("Enter radius of the Circle:\n");
    scanf("%f", & radius);

    // Calculating perimeter of the circle :
    // perimeter = 2 * 3.14 * radius -> formula perimeter of circle...

    perimeter = 2 * pi * radius;

    printf("Perimeter of the circle: %0.4f\n", perimeter);

}