/* 1. Write C program to print all alphabets from a to z. using do while loop */

#include <stdio.h>

void main() {
    char letter1 = 'a';
    char letter2 = 'A';
    printf("\n");
    do {
        printf(" %c ", letter1);
        letter1++;
    } while (letter1 <= 'z');
    
    printf("\n\n");
    
    do {
        printf(" %c ", letter2);
        letter2++;
    } while (letter2 <= 'Z');    
}
