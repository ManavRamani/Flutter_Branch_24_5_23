/*wap to perform logical operators*/

#include<stdio.h>

void main()
{
	int a,b,c;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	printf("\n Enter the value of c : ");
	scanf("%d",&c);


	// Logical AND Operator : '&&'
	printf("a > b && a > c : %d\n",a>b && a>c);
	printf("b > a && b > c : %d\n",b>a && b>c);
	printf("c > a && c > b : %d\n",c>a && c>b);

	// Logical OR Operator :  '||'
	printf("a > b || a > c : %d\n",a>b || a>c);

	// Logical NOT Operator :  '!='
	printf("a != b : %d\n",a!=b);


}