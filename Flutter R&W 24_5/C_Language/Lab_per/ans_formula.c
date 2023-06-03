/* wap to find a the answer given formula (x + y)² */

#include <stdio.h>

void main() {
    
    int x, y, ans;
    
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    ans = (x * x) + (y * y) + (2 * x * y);

    printf("\n\t(x + y)²");
    printf("\n\t= (x * x) + (y * y) + (2 * x * y)\n\t= (%d * %d)+(%d * %d)+(2 * %d * %d)",x,x,y,y,x,y);
    printf("\n\t= %d + %d + %d",x*x ,y*y ,2*x*y);
    printf("\n(x + y)² = %d\n",ans);

}
