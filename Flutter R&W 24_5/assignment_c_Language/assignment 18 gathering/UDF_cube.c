/*
    1.WAP to find cube of given no using UDF :
*/

#include <stdio.h>
int cube(int num);

void main()
{
    int number, c_r;    // c_r -> Cube Result
    printf("\n Enter a number : ");
    scanf("%d", &number);

    c_r = cube(number);
    printf("Cube of %d is: %d\n", number, c_r);
}
int cube(int num)
{
    int result = num * num * num;
    return result;
}