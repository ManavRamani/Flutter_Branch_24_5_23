/* 3. Write C program to count number of digits in a number. */

#include <stdio.h>

void main() {
    int num, count = 0;
    
    printf("\nEnter a number : ");
    scanf("%d", &num);
    
    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num /= 10;
            count++;
        }
    }
    
    printf("\nNumber of digits : %d\n", count);
    
}
