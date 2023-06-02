/*wap to perform if statement*/

#include<stdio.h>

void main()
{
	int age;

	printf("\nEnter your Age : ");
	scanf("%d",&age);

	if(age>=18)
	{
		printf("You can vote...");

	}
	else
	{
		printf("You cann't vote....");
	}

}