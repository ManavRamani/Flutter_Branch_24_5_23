/*
    using for loop use ascii values and print ascii value like 'a' to 'z' etc.... : -
*/

#include <stdio.h>
void main()
{
    int i;

    printf("Print Lower Latter 'a' to 'z' :\n");
    for (i = 97; i <= 122; i++)
    {
        printf("Ascii Value of : %d : %c \n", i, i);
    }

    printf("\n\n");

    printf("Print Lower Latter 'A' to 'Z' :\n");
    for (i = 65; i <= 90; i++)
    {
        printf("Ascii Value of : %d : %c \n", i, i);
    }

    printf("\n\n");

    printf("print Symbols : \n\n");
    for (i = 91; i <= 96; i++)
    {
        printf("Ascii Value of : %d : %c \n\n", i, i);
    }
    for (i = 33; i <= 47; i++)
    {
        printf("Ascii Value of : %d : %c \n\n", i, i);
    }
    for (i = 58; i <= 64; i++)
    {
        printf("Ascii Value of : %d : %c \n\n", i, i);
    }
    for (i = 123; i <= 126; i++)
    {
        printf("Ascii Value of : %d : %c \n\n", i, i);
    }
    printf("\n\n");

    printf("print Digits : '0' to '9' : \n");
    for (i = 48; i <= 57; i++)
    {
        printf("Ascii Value of : %d : %c \n", i, i);
    }
}