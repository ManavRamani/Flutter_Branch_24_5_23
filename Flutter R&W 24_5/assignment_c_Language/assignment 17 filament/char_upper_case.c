/*
    4-WAP to convert given character in uppercase :
*/

#include<stdio.h>

void main() {
    char ch;

    printf("\n Enter a character : ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') 
    {
        ch = ch - ('a' - 'A'); // Convert to Uppercase by adding the difference between lowercase and uppercase
    }

    printf("\n Converted character : %c\n", ch);

}
