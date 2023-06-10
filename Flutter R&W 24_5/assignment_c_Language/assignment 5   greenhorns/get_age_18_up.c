/* 3. take age from user if the age more then 18 then return true other wise false,
         but without using if condition  */

#include <stdio.h>

void main() 
{
    int age, result;

    printf("\nEnter Your Age : ");
    scanf("%d", &age);

    result = age > 18 ? printf("\nResult : true : 18 Up : User Age is : %d\n", age) : printf("\nResult : false : Sorry your age is Invalid : User Age is : %d\n", age);



}
