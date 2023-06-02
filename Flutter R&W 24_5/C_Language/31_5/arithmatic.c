/*wap to perform all arithmatic task*/

#include<stdio.h>

void main()
{
	int a,b,c;

	printf("\nEnter the value of A : ");
	scanf("%d",&a);
	printf("\nEnter the value of B : ");
	scanf("%d",&b);

	c=a+b;
	printf("\n A + B = Ans \n %d + %d = %d\n",a,b,c);

	c=a-b;
	printf("\n A - B = Ans \n %d - %d = %d\n",a,b,c);

	c=a*b;
	printf("\n A * B = Ans \n %d * %d = %d\n",a,b,c);

	c=a/b;
	printf("\n A / B = Ans \n %d / %d = %d\n",a,b,c);

}