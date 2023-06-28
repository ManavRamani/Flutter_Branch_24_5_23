/*
    1. C program to find factorial of number using recursion :
*/

#include<stdio.h>
int factorial(int n);

void main() 
{

    int number, fact;
    
    printf("\nEnter a Number : ");
    scanf("%d", &number);
    
    fact = factorial(number);
    
    printf("Factorial of %d = %d\n", number, fact);
    
}

int factorial(int n) 
{
    int total;
    if (n == 0 || n == 1) 
    {
        return(1);
    } 
    else 
    {
        total = n * factorial(n - 1);
    }
    return total;
}
