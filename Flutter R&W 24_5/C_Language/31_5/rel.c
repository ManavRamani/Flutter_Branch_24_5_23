/*wap to perform relative operatos*/

#include<stdio.h>

void main()
{
	int a,b;
	
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);

	printf("a : %d \t b : %d \n\n",a,b);
	
	printf("a > b : %d\n",a>b);
	printf("a < b : %d\n",a<b);
	printf("a >= b : %d\n",a>=b);
	printf("a <= b : %d\n",a<=b);

}