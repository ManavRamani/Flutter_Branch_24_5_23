/* 3-wap to perform various arithmatic task using swith statement */

#include<stdio.h>

void main()
{
    int a,b;
    char symbol;

    printf("\nEnter value of a : ");
    scanf("%d",&a);
    printf("\nEnter Value of b : ");
    scanf("%d",&b);

    printf("\nEnter Your choice symbol (+,-,*,/,%%) : ");
    scanf(" %c",&symbol);
    
    switch (symbol)
    {
        case '+' :
            printf("a + b Ans is : %d",a+b);
            break;
    
        case '-' :
            printf("a - b Ans is : %d",a-b);
            break;

        case '*' :
            printf("a * b Ans is : %d",a*b);
            break;    

        case '/' :
            printf("a / b Ans is : %d",a/b);
            break;

        case '%' :
            printf("a %% b Ans is : %d",a%b);
            break;
        
        default:
            printf("My dear friend,\n\tpls try agine...");
            break;
    }



}