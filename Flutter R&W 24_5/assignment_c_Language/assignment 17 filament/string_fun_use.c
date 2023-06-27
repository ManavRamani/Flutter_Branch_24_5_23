/*
    1-Wap to use all string functions in single program ...
*/

#include <stdio.h>
#include <string.h>

void main()
{
    char s1[] = " Ramani ";
    char s2[] = " Manav ";
    char s3[20];

    printf("\n s1 is : %s",s1);
    printf("\n s2 is : %s",s2);

    // String length
    printf("\n Length of s1: %lu\n", strlen(s1));

    // String copy
    strcpy(s3, s1);
    printf("\n s3 after strcpy: %s\n", s3);

    // String concatenation
    strcat(s3, s2);
    printf("\n s3 after strcat: %s\n", s3);


}
