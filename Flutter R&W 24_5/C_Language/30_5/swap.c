/*wap to swap values*/

#include<stdio.h>

void main()
{
	int a,b,c;

	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;

	printf(" the value of a : %d\n the value of b : %d\n",a,b);

}