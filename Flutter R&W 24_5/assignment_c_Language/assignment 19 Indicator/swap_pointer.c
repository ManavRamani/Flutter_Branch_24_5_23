/*
    1. C program to swap two numbers using pointers :
*/
#include<stdio.h>
void swap(int *,int *);
void main()
{
    int a,b;

    printf("\n Enter 1st value : ");
    scanf("%d",&a);
    printf("\n Enter 2nd value : ");
    scanf("%d",&b);

    printf("\n Before : \n");
    printf("\n First Value a = %d",a);
    printf("\n Second Value a = %d\n",b);

    swap(&a,&b);
    
    printf("\n After : \n");
    printf("\n First Value a = %d",a);
    printf("\n Second Value a = %d",b);
}
void swap(int *a,int *b)
{
    int m;
    m=*a;
    *a=*b;
    *b=m;
}
