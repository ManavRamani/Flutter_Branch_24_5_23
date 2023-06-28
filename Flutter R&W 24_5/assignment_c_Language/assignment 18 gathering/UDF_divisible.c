/*
    2.WAP to find if a given nunmber is divisible by 3 & 5 both or not using UDF :
*/

#include <stdio.h>
int is_Divisible(int n);

void main()
{
    int num;

    printf("\n Enter a number : ");
    scanf("%d", &num);

    if (is_Divisible(num))
    {
        printf("\n %d -> is divisible by both 3 and 5. \n ", num);
    }
    else
    {
        printf("\n %d -> is not divisible by both 3 and 5. \n ", num);
    }
}

int is_Divisible(int n)
{
    if (n % 3 == 0 && n % 5 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}