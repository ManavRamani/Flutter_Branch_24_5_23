/* wap to perform simple with logical operator*/

#include<stdio.h>

void main()
{
	
	int a,b;

	printf("\nEnter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);

	if(a>b)
	{
		printf("a : %d : is bigger",a);	
	}
	else{
		printf("b : %d : is bigger",b);
	}
}