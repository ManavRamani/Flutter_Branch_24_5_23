/* 1. Write C program to input any character and check whether it is alphabet, digit or special character. */

#include <stdio.h>

void main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("The character is an alphabet : %c.\n", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("The character is a digit : %c.\n", ch);
    }
    else
    {
        printf("The character is a special character : %c.\n", ch);
    }
}
