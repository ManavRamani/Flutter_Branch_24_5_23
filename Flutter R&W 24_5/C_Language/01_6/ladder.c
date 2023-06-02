/*wap to perform simple with logical operator*/

#include<stdio.h>

void main()
{
	int a,b,c;

	printf("\nEnter the value of a : ");
	scanf("%d",&a);
	printf("\nEnter the value of b : ");
	scanf("%d",&b);
	printf("\nEnter the value of c : ");
	scanf("%d",&c);

	if(a>b && a>c)
	{
		printf("a : %d is bigger...",a);	
	}
	else if(b>c)
	{
		printf("b : %d is bigger..",b);
	}
	else
	{
		printf("c : %d is bigger..",c);
	}
	
}