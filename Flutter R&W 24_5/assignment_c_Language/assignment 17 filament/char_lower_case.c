/*
    3-WAP to convert given character in lowercase :
*/

#include<stdio.h>


void main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') 
    {
        ch = ch + ('a' - 'A'); // Convert to lowercase by adding the difference between lowercase and uppercase
    }

    printf("Converted character: %c\n", ch);

}
